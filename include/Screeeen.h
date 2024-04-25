#ifndef SCREEEEN_H
#define SCREEEEN_H
#include <iostream>
#include "ClientManger.h"
//#include "EmployeeManager.h"
class Screeeen
{
    public:
        static void Bank_name ()
        {
            cout << "Circle_k_Bank"<<endl;

        }
        static void welcome ()
        {

            cout <<"welcome"<<endl;
        }


        static int login_as()
        {
            cout <<"How can i help you ?"<<endl<<"for Client press 1 " <<endl<<"for Employee press 2 " <<endl<<"for Admin press 3 " <<endl;
            int x ;
            cin >> x;
            return x;
        }
        static void login_Options()
        {
            if (login_as()== 1 ){
                ClientManger::PrintClientMenu();
            }
//            else if (login_as()== 2){
//                EmployeeManger::PrintEmployeMenu();
//            }
//            else if (login_as()== 3){
//                Adminmaneger::PrintEmployeeMenu();
//                }
        }
    static void logout(){
            cout<<"logged out\n"<<"see you soon"<<endl;
            exit(0);
    }
    static void run_app(){
        Bank_name();
        welcome();
        login_Options();
        login_as();
    }
};

#endif // SCREEEEN_H
