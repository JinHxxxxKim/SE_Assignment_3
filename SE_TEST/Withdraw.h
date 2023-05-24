#pragma once
#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "WithdrawUI.h"

using namespace std;

class Withdraw
{
private:
	WithdrawUI* withdrawUI;
	Applicant** applicantList;
	Company** companyList;
public:
	Withdraw(Company* companyList[], Applicant* applicantList[]);
	string deleteUser(string ID, int companyNum, int applicantNum);

	//getter
	WithdrawUI* getWithdrawUI();
};
#endif 