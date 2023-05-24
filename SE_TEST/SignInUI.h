#pragma once
#ifndef SIGHINUI_H
#define SIGHINUI_H
#include <iostream>
#include <fstream>
#include <string>
#include "User.h"

using namespace std;

class SignIn;

class SignInUI
{
private:
	SignIn* signInController;
public:
	SignInUI();
	void setSignInController(SignIn* controller);
	void startSignInInterface();
	User* sighIn(ifstream* ifs, ofstream* ofs, int companyNum, int applicantNum);
};

#endif