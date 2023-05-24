#pragma once
#ifndef SIGHUPUI_H
#define SIGHUPUI_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SignUp;

class SignUpUI
{
private:
    SignUp* signUpController;

public:
    SignUpUI();
    void setSignUpController(SignUp* controller);
    void startSignUpInterface();
    void createCompany(ifstream* ifs, ofstream* ofs, int companyIdx);
    void createApplicant(ifstream* ifs, ofstream* ofs, int companyIdx);
};

#endif