#include <iostream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"

using namespace std;

SignUp::SignUp(Company* companyList[], Applicant* applicantList[]) {
	this->signUpUI = new SignUpUI();
	this->companyList = companyList;
	this->applicantList = applicantList;
}

string SignUp::addNewCompany(string companyName, int businessNumber, string ID, string password, int companyIdx) {
	// communicationDiagram: 회원가입 2.1.1
	companyList[companyIdx] = new Company(companyName, businessNumber, ID, password);
	return string("> 1")
		.append(" ")
		.append(companyName)
		.append(" ")
		.append(to_string(businessNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

string SignUp::addNewApplicant(string name, int registrationNumber, string ID, string password, int applicantIdx) {
	// communicationDiagram: 회원가입 3.1.1
	applicantList[applicantIdx] = new Applicant(name, registrationNumber, ID, password);
	return string("> 2")
		.append(" ")
		.append(name)
		.append(" ")
		.append(to_string(registrationNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

//getter
Applicant** SignUp::getApplicantList() { return applicantList; }
Company** SignUp::getCompanyList() { return companyList; }
SignUpUI* SignUp::getSignUpUI() { return signUpUI; }
//setter