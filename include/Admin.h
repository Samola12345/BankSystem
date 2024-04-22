#pragma once
#include"Employee.h";

class Admin :public Employee
{
public:
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

