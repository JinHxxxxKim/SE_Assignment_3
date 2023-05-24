<<<<<<< HEAD
#include <iostream>
#include "LogOut.h"

=======
#include "LogOut.h"
#include <iostream>
>>>>>>> 2252b3043eab64b5351f7b581b22fdbb7a1bc343

using namespace std;

void LogOutUI::startLogOutInterface() {

}

void LogOutUI::logOut(ofstream* ofs, User*& currentUser, LogOut* logOut) {
  string ID = currentUser->getID();
  logOut->logOut(currentUser);
  *ofs << "2.2. 로그아웃" << endl << "> " << ID << endl;
<<<<<<< HEAD
}
=======
}
>>>>>>> 2252b3043eab64b5351f7b581b22fdbb7a1bc343
