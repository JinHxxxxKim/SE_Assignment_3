#pragma once
#include "User.h"
//#include "RecruitmentCollection.cpp"

class Company :public User {
private:
    string companyName;
    int businessNumber;
    //RecruitmentCollection ownedRecruitmentCollection;

public:
    Company();
    ~Company();
    Company(string companyName, int businessNumber, string id, string pw);
    Company* getCompany();

    //getter
    string getCompanyName();
    int getBusinessNumber();
    //RecruitmentCollection listRecruitments();
};