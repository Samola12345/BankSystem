#pragma once
#include"Employee.h"
#include"Client.h"
#include <vector>
#include "FilesHelper.h"
class Admin :public Employee
{
public:
    Admin()
    {
        id = 1000000;
    }
    Admin( string name, string password, double salary) :Employee(name, password, salary){

    }
    void display()
    {
        Employee::display();
    }
    ///------------------------------
    static void add_employee(Employee& e)
    {
        Employee::all_employees.push_back(e);
    }
    static Employee* search_employee(int id){
        for(int i=0;i<Employee::all_employees.size();i++)
        {
            if (Employee::all_employees[i].get_ID()==id)
            {
                return &Employee::all_employees[i];
            }else
                return nullptr;
        }
    }
    void List_employee()
    {
        for(int i=0;i<Employee::all_employees.size();i++)
            {
            Employee::all_employees[i].display();
            cout<<"-------the next client is--------- "<<endl;
            }
    }
    void edit_employee(int id, string name, string password,double salary)
    {
        search_employee(id)->set_name(name);
        search_employee(id)->set_salary(salary);
        search_employee(id)->set_password(password);
    }
};

