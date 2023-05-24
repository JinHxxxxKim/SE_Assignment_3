#include <iostream>
#include <fstream>
#include <string>
#include "WithdrawUI.h"
#include "Withdraw.h"

using namespace std;

WithdrawUI::WithdrawUI() {
}

void WithdrawUI::setWithdrawController(Withdraw* controller) {
	this->withdrawController = controller;
}

void WithdrawUI::startWithdrawInterface() {}

void WithdrawUI::withdraw(ofstream* ofs, string id, int companyNum, int applicantNum) {
	this->withdrawController->deleteUser(id, companyNum, applicantNum);
	*ofs << "1.2. ȸ��Ż��\n";
	*ofs << "> " << id<<"\n";
}

// boundary���� ���� �Է�, ��� ��� ����