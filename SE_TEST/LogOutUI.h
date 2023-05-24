#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "..\domain\User\User.h"
#include <fstream>

class LogOut;

class LogOutUI {
public:
  void startLogOutInterface();
  void logOut(ofstream* ofs, User*& currentUser, LogOut* logOut);
};

#endif