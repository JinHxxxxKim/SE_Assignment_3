#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "User.h"
#include <fstream>

class LogOut;

class LogOutUI {
public:
  void startLogOutInterface();
  void logOut(ofstream* ofs, User*& currentUser, LogOut* logOut);
};

<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> 2252b3043eab64b5351f7b581b22fdbb7a1bc343
