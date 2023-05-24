#include "User.h"
#include <iostream>

User::User() {}

User::User(string id, string pw) {
	this->ID = id;
	this->PW = pw;
}

User::~User() {}

//getter
string User::getID() { return this->ID; }
string User::getPW() { return this->PW; }