#ifndef SCREENS_H
#define SCREENS_H
#include <iostream>
#include "ClientManger.h"

class Screen
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
            switch (login_as()){
            case 1:
                ClientManger::PrintClientMenu();
                break;

            case 2:
                EmployeeManger::PrintEmployeMenu();
                break;
            case 3:
                Adminmaneger::PrintEmployeeMenu();
            }
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

#endif
