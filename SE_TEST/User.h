#pragma once

#ifndef USER_H
#define USER_H
#include <string>


using namespace std;

class User {
private:
    string ID;
    string PW;

public:
    User();
    virtual ~User();
    User(string id, string pw);
    //getter
    string getID();
    string getPW();
    //setter
    
};

#endif