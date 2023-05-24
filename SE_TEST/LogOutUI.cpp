#include <iostream>
#include "LogOut.h"


using namespace std;

void LogOutUI::startLogOutInterface() {

}

void LogOutUI::logOut(ofstream* ofs, User*& currentUser, LogOut* logOut) {
  string ID = currentUser->getID();
  logOut->logOut(currentUser);
  *ofs << "2.2. 로그아웃" << endl << "> " << ID << endl;
}