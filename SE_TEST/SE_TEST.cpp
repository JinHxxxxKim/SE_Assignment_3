#include <string>
#include <iostream>
#include <fstream>
// 변경
#include "User.h"
#include "Applicant.h"
#include "Company.h"
#include "SignUp.h"
#include "SignIn.h"
#include "Withdraw.h"
//

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 변경
#define MAX_APPLICANT_NUM 100
#define MAX_COMPANY_NUM 100
//

using namespace std;

void doTask();
void program_exit(int& exit_flag);

ifstream ifs;
ofstream ofs;


int main() {
    ifs.open(INPUT_FILE_NAME);
    ofs.open(OUTPUT_FILE_NAME);

    doTask();

    return 0;
}

void doTask() {
    /*
    * system에서 사용할 Company, Applicant 저장소
    * DB가 없으므로 => on memory 형태로 선언 및 Entity를 사용하는 Controller에 매개변수로 전달
    * 즉, Repository를 각 controller에 주입하는 것의 역할
    */
    Company *companyList[MAX_COMPANY_NUM];
    Applicant *applicantList[MAX_APPLICANT_NUM];
    int companyIdx = 0;
    int applicantIdx = 0;

    /*
    * 의존성 주입 
    * 모든 usecase의 controller 선언 및 boundary에 해당 controller 주입
    */
    // 회원가입
    SignUp* signUp = new SignUp(companyList, applicantList);
    signUp->getSignUpUI()->setSignUpController(signUp);
    // 로그인
    SignIn* signIn = new SignIn(companyList, applicantList);
    signIn->getSignInUI()->setSignInController(signIn);
    // 회원탈퇴
    Withdraw* withDraw = new Withdraw(companyList, applicantList);
    withDraw->getWithdrawUI()->setWithdrawController(withDraw);

    
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    User* currUser = nullptr;

    while (!is_program_exit) {
        cout << companyIdx << " " << applicantIdx << endl;
        ifs >> menu_level_1 >> menu_level_2;
        switch (menu_level_1) 
        {
        case 1:
        {
            switch (menu_level_2) 
            {
            case 1: // 회원 가입
            {
                // communicationDiagram: 회원가입 1.
                signUp->getSignUpUI()->startSignUpInterface();

                // 사용자의 입력
                int userType;
                ifs >> userType;

                if (userType == 1) {
                    // communicationDiagram: 회원가입 2.
                    signUp->getSignUpUI()->createCompany(&ifs, &ofs, companyIdx);
                    ++companyIdx;
                }
                if (userType == 2) {
                    // communicationDiagram: 회원가입 2.
                    signUp->getSignUpUI()->createApplicant(&ifs, &ofs, applicantIdx);
                    ++applicantIdx;
                }
                break;
            }
            case 2: // 회원 탈퇴
            {
                withDraw->getWithdrawUI()->startWithdrawInterface();
                if (dynamic_cast<Applicant*>(currUser) != nullptr) { // 탈퇴하는 유저가 Applicant User
                    --applicantIdx;
                }
                else { // 탈퇴하는 유저가 Company User
                    --companyIdx;
                }
                withDraw->getWithdrawUI()->withdraw(&ofs, currUser->getID(), companyIdx, applicantIdx);
                currUser = nullptr;
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2) 
            {
            case 1: // 로그인
            {
                // communicationDiagram: 로그인 .
                signIn->getSignInUI()->startSignInInterface();
                currUser = signIn->getSignInUI()->sighIn(&ifs, &ofs, companyIdx, applicantIdx);
                break;
            }
            case 2: // 로그아웃
            {

            }
            }
            break;
        }
        case 3: // 채용 관리
        {
            switch (menu_level_2) {

            }
        }
        case 4: // 지원 관리
        {
            switch (menu_level_2) {

            }
        }
        case 5: // 통계 관리
        {
            switch (menu_level_2) {

            }
        }
        case 6:
        {
            switch (menu_level_2) {
            case 1:{
                ofs << "====================\n";
                for (int i = 0; i < companyIdx; ++i) {
                    ofs << "||   " << companyList[i]->getCompanyName() << "     ||\n";
                }
                ofs << "====================\n";
                for (int i = 0; i < applicantIdx; ++i) {
                    ofs << "||   " << applicantList[i]->getApplicantName() << "   ||\n";
                }
                ofs << "====================\n";
                program_exit(is_program_exit);
            }
            }
        }
        }
    }
}

void program_exit(int& exit_flag) {
    exit_flag = 1;
}