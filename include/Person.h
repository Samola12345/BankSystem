#pragma once
#include "Validation.h"
#include "iostream"
using namespace std;

class Person
{
protected:
    string name;
    string password;
public:
    static int id;
    Person(){}
    Person(string name, string password) {
        set_name(name);
        set_password(password);
    }

    //getter function
    string get_Name()
    {
        return name;
    }
    int get_ID()
    {
        return id;
    }
    string get_password()
    {
        return password;
    }

    //setter function
    void  set_id(int id)
    {
        this->id = id;
    }
    void  set_name(string name)
    {
        if (Validation::ValidName(name))
        {
            this->name = name;
        }
        else
        {
            cout << "Invaild Name" << endl;
        }

    }

    void set_password(string password)
    {
        if (Validation::ValidPassword(password))
        {
            this->password = password;
        }
        else
        {
            cout << "Invaild Password" << endl;
        }
    }

    void change_password(string password)
    {
        if (Validation::ValidPassword(password))
        {
            this->password = password;
        }
        else
        {
            cout << "Invaild New Password ..Can't change " << endl;
        }

    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "password:" << password << endl;
    }

};
int Person::id=0;
