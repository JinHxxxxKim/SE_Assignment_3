#pragma once
#ifndef SIGHUP_H
#define SIGHUP_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignUpUI.h"

using namespace std;


class SignUp
{
private:
    SignUpUI* signUpUI;
    Applicant** applicantList;
    Company** companyList;
public:
    SignUp(Company* companyList[], Applicant* applicantList[]);
    string addNewCompany(string companyName, int businessNumber, string ID, string password, int companyIdx);
    string addNewApplicant(string companyName, int registrationNumber, string ID, string password, int applicantIdx);
    
    // getter
    Applicant** getApplicantList();
    Company** getCompanyList();
    SignUpUI* getSignUpUI();
    // setter
};
#endif 