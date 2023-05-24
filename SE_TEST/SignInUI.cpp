#include <iostream>
#include <fstream>
#include <string>
#include "SignInUI.h"
#include "SignIn.h"

using namespace std;

SignInUI::SignInUI() {
}

void SignInUI::startSignInInterface() {}

void SignInUI::setSignInController(SignIn* controller) {
	this->signInController = controller;
}

User* SignInUI::sighIn(ifstream* ifs, ofstream* ofs, int companyNum, int applicantNum){
	string ID, password;
	*ifs >> ID >> password;

	User* currUser = this->signInController->checkUser(ID, password, companyNum, applicantNum);

	string str = string("> 2")
		.append(" ")
		.append(currUser->getID())
		.append(" ")
		.append(currUser->getPW())
		.append("\n")
		.append("\n");
	*ofs << "2.1. ·Î±×ÀÎ\n";
	*ofs << str;
	return currUser;
}
