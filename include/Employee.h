#pragma once
#include "Person.h"
#include "Validation.h"
#include "iostream"
#include <vector>
#include "Client.h"
using namespace std;

class Employee:public Person
{
protected:
    double salary;
public:
    static vector<Employee> all_employees;
    Employee()
    {
        id = 1;
        salary = 0;
    }
    Employee(int id, string name, string password, double salary) :Person(id, name, password)
    {
        set_salary(salary);
    }

    void set_salary(double salary)
    {
        if (Validation::ValidSalary(salary) )
        {
            this->salary = salary;
        }
        else
        {
            cout << "Invalid salary";
        }
    }
    double get_salary()
    {
        return salary;
    }
    void display()
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
    void add_client(Client& c){
        Client::all_clients.push_back(c);
    }

};

