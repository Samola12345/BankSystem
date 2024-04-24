#pragma once
#include"Employee.h"
#include"Client.h"
#include <vector>
class Admin :public Employee
{
public:
    static vector<Admin> all_admins;
    Admin()
    {
        id = 10000;
    }
    Admin( string name, string password, double salary) :Employee( name, password, salary){}
    void display()
    {
        Employee::display();
    }
    void add_client(Client& c)
    {
        Client::all_clients.push_back(c);
    }
    Client* search_client(int id)
    {
        for(int i=0;i<Client::all_clients.size();i++){
            if (Client::all_clients[i].get_ID()==id){
                return &Client::all_clients[i];
            }else
                return nullptr;
        }
    }
    void List_client()
    {
        for(int i=0;i<Client::all_clients.size();i++)
        {
            Client::all_clients[i].display();
            cout<<"-------the next client is--------- "<<endl;
        }
    }
    void edit_client(int id, string name, string password,double balance){
        search_client(id)->set_name(name);
        search_client(id)->set_balance(balance);
        search_client(id)->set_password(password);
    }
    void add_employee(Employee& c)
    {
        Employee::all_employees.push_back(c);
    }
    Employee* search_employee(int id){
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

