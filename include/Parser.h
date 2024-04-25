#pragma once
#include <fstream>
#include <iostream>
#include <cstring>
#include <vector>
#include<sstream>
#include<Admin.h>

using namespace std;

class Parser
{
    static vector<string> split(string s)
    {
        stringstream ss(s);
        string part;
        vector<string>parts;
        while (getline(ss, part, '|'))
        {
            parts.push_back(part);
        }
        return parts;
    }
public:
    static Client parserToClient(string line)
    {
        Client c;

        vector <string> v = split(line);

        c.set_id(stoi(v[0]));
        c.set_name(v[1]);
        c.set_password(v[2]);
        c.set_balance(stoi(v[3]));

        return c;

    }

    static Employee parserToEmployee(string line)
    {
        Employee e;

        vector <string> v = split(line);

        e.set_id(stoi(v[0]));
        e.set_name(v[1]);
        e.set_password(v[2]);
        e.set_salary(stod(v[3]));
        return e;
    }
    static Admin parserToAdmin(string line)
    {
        Admin a;

        vector <string> v = split(line);

        a.set_id(stoi(v[0]));
        a.set_name(v[1]);
        a.set_password(v[2]);
        a.set_salary(stod(v[3]));

        return a;
    }
};

