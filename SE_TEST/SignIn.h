#pragma once
#ifndef SIGNIN_H
#define SIGNIN_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignInUI.h"

using namespace std;

class SignIn
{
private:
	SignInUI* signInUI;
	Applicant** applicantList;
	Company** companyList;
public:
	SignIn(Company* companyList[], Applicant* applicantList[]);
	User* checkUser(string ID, string password, int companyNum, int applicantNum);
	
	//getter
	SignInUI* getSignInUI();
};
#endif 