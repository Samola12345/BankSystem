#ifndef ADMINMANEGER_H
#define ADMINMANEGER_H
#pragma once
#include "EmployeeManger.h"

class Adminmaneger
{
public:
    static void printEmployeeMenu{
        EmployeeManger::PrintEmployeMenu();
    }
    static Admin* login(int id, string password)
    {
        if(Admin::search_employee(id) != nullptr){
        Employee* ptr = Admin::search_employee(id);
        if(ptr->get_password()==password)
        {
            return ptr;
        }
        else{
            cout<<"invalid password";
        }
        }
    }
};
