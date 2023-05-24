#include "LogOut.h"
#include <iostream>
using namespace std;

LogOut::LogOut() {
  this->logOutUI = new LogOutUI();
}

LogOutUI* LogOut::getLogOutUI() {
  return this->logOutUI;
}

void LogOut::logOut(User*& currentUser) {
  currentUser = NULL;
}