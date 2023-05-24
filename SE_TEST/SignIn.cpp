#include <iostream>
#include <string>
#include "SignIn.h"
#include "SignInUI.h"

using namespace std;

SignIn::SignIn(Company* companyList[], Applicant* applicantList[]) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->signInUI = new SignInUI();
}

User* SignIn::checkUser(string ID, string password, int companyNum, int applicantNum) {
	for (int i = 0; i < companyNum; ++i) {
		Company* cmpComp = companyList[i]->getCompany();

		if (cmpComp->getID().compare(ID)==0) {
			if (cmpComp->getPW().compare(password) == 0) {
				return cmpComp;
			}
		}
	}

	for (int i = 0; i < applicantNum; ++i) {
		Applicant* cmpAppl = applicantList[i]->getApplicant();

		if (cmpAppl->getID().compare(ID) == 0) {
			if (cmpAppl->getPW().compare(password) == 0) {
				return cmpAppl;
			}
		}
	}
}

//getter
SignInUI* SignIn::getSignInUI() { return this->signInUI; }
//setter
