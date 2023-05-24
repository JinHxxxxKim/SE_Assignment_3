#pragma once
#ifndef WITHDRAWUI_H
#define WITHDRAWUI_H
#include <iostream>
#include <string>

using namespace std;

class Withdraw;

class WithdrawUI
{
private:
	Withdraw* withdrawController;
public:
	WithdrawUI();
	void startWithdrawInterface();
	void setWithdrawController(Withdraw* controller);
	void withdraw(ofstream* ofs, string ID, int companyNum, int applicantNum);
};

#endif