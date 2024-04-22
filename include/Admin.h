#pragma once
#include"Employee.h"
#include <vector>
class Admin :public Employee
{
public:
    static vector<Admin> all_admins;
    Admin()
    {
        id = 10000;
    }
    Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary){}
    void display()
    {
        Employee::display();
    }

};

