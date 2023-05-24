#pragma once
#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <string>
#include "LogOutUI.h"
#include "User.h"

class LogOut {
private:
  LogOutUI* logOutUI;
public:
  LogOut();
  LogOutUI* getLogOutUI();
  void logOut(User*& currentUser);
};

#endif