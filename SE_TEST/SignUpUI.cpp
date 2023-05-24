#include <iostream>
#include <fstream>
#include <string>
#include "SignUpUI.h"
#include "SignUp.h"

using namespace std;

SignUpUI::SignUpUI() {
}

void SignUpUI::setSignUpController(SignUp* controller) {
	this->signUpController = controller;
}

void SignUpUI::startSignUpInterface() {}

void SignUpUI::createCompany(ifstream* ifs, ofstream* ofs, int companyIdx) {
	// communicationDiagram: 회원가입 2.1
	string companyName, companyID, companyPW;
	int businessNumber;

	*ifs >> companyName >> businessNumber >> companyID >> companyPW;
	*ofs << "1.1.회원가입\n";
	*ofs << this->signUpController->addNewCompany(companyName, businessNumber, companyID, companyPW, companyIdx);
}

void SignUpUI::createApplicant(ifstream* ifs, ofstream* ofs, int applicantIdx) {
	// communicationDiagram: 회원가입 3.1
	string name, ID, PW;
	int registrationNumber;
	*ifs >> name >> registrationNumber >> ID >> PW;
	*ofs << "1.1.회원가입\n";
	*ofs << this->signUpController->addNewApplicant(name, registrationNumber, ID, PW, applicantIdx);
}

// boundary에서 파일 입력, 출력 모두 진행