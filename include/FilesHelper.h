#pragma once
#include<vector>
#include "iostream"
#include <fstream>
#include <sstream>
#include"Parser.h"
using namespace std;

class FilesHelper
{
public:
	static void SaveLast(string fileName, int id)///to add last id in the last id file
	{
		fstream file;
		file.open(fileName,ios::out);
		file.clear();
		file << id;
		file.close();
	}
	///to get last id from the lastidfile
	static int GetLast(string fileName)
	{
		ifstream file;
		file.open(fileName);
		file.clear();
		int id;
		file >> id;
		return id;
	}
	static void saveClient(Client& c) {
		int id=GetLast("ClientlastId.txt");
		fstream file;
		file.open("client.txt", ios::app);
        file.clear();
		file << id+1 <<'|'<<c.get_Name()<<'|'<<c.get_password()<<'|'<<c.get_balance()<<endl;
        file.close();
		SaveLast("ClientlastId.txt", id+1);
	}
	static void saveEmployee(Employee e,string fileName,string last_id_file) {
		int id = GetLast(last_id_file);
		fstream file;
		file.open(fileName,ios::app);
		file.clear();
		file << id + 1 << '|' << e.get_Name() << '|' << e.get_password() << '|' << e.get_salary() << endl;
		file.close();
		SaveLast(last_id_file, id + 1);
	}
	static void get_clients(){
		string line;
		ifstream file;
		file.open("client.txt");
		while (getline(file,line))
		{
			Client c1;
			c1=Parser::parserToClient(line);
			Client::all_clients.push_back(c1);
		}
		file.close();
	}
	static void get_employees() {
		string line;
		ifstream file;
		file.open("Employee.txt");
		while (getline(file, line))
		{
			Employee e1;
			e1 = Parser::parserToEmployee(line);
			Employee::all_employees.push_back(e1);
		}
		file.close();
	}
	static void get_admins() {
		string line;
		ifstream file;
		file.open("admin.txt");
		while (getline(file, line))
		{
			Admin a1;
			a1 = Parser::parserToAdmin(line);
			Admin::all_employees.push_back(a1);
		}
		file.close();
	}
	static void clear(string filename, string last_id_file) {
		fstream file1, file2;
		file1.open(filename, ios::out | ios::trunc);
		file1.close();
		file2.open(last_id_file,ios::out);
		file2.close();
	}
	~FilesHelper(){
        clear("client.txt","ClientlastId.txt");
	}
};
