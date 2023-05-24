#include "Applicant.h"
#include <iostream>
using namespace std;
Applicant::Applicant() {
}
Applicant::~Applicant() {
    cout << "Applicant ¼Ò¸êÀÚ È£Ãâ" << endl;
}
Applicant::Applicant(string name, int registrationNumber, string id, string pw) :User(id, pw) {
    this->applicnatName = name;
    this->registrationNumber = registrationNumber;
}

Applicant* Applicant::getApplicant() { return this; }
string Applicant::getApplicantName() { return this->applicnatName; }
int Applicant::getRegistrationNumber() { return this->registrationNumber; }

/*
ApplicationCollection Applicant::listApplications() {

}
*/