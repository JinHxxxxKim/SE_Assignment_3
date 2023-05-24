#include <iostream>
#include <string>
#include "Withdraw.h"
#include "WithdrawUI.h"

using namespace std;

Withdraw::Withdraw(Company* companyList[], Applicant* applicantList[]) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->withdrawUI = new WithdrawUI();
}

string Withdraw::deleteUser(string ID, int companyNum, int applicantNum) {
	for (int i = 0; i < companyNum; ++i) {
		Company* cmpComp = companyList[i]->getCompany();
		if (cmpComp->getID().compare(ID) == 0) {
			cout << i <<companyNum<< endl;
			delete cmpComp;
			
			for (int j = i+1; j < companyNum+1; ++i, ++j) {
				companyList[i] = companyList[j];
				//cout << companyList[i]->getCompanyName() << " " << companyList[j]->getCompanyName() << endl;
			}
		}
	}

	for (int i = 0; i < applicantNum; ++i) {
		Applicant* cmpAppl = applicantList[i]->getApplicant();

		if (cmpAppl->getID().compare(ID) == 0) {
			delete cmpAppl;
			for (int j = i + 1; j < applicantNum+1; ++i, ++j) {
				applicantList[i] = applicantList[j];
			}
		}
	}
	return ID;
}

//getter
WithdrawUI* Withdraw::getWithdrawUI() { return this->withdrawUI; }
//setter
