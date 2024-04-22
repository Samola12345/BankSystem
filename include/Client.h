#pragma once
#include "Person.h"
#include "Validation.h"
#include "iostream"
#include <vector>
using namespace std;

class Client :public Person
{
	double balance;

public:
    static vector<Client> all_clients;
	Client()
	{
	    id += 1;
		balance = 0;
	}
	Client(int id, string name, string password, double balance) :Person(id, name, password)
	{
		set_balance(balance);
	}
	void set_balance(double balance)
	{
		if (Validation::Validbalance(balance))
		{
			this->balance = balance;
		}
		else
		{
			cout << "you are poor";
		}
	}
	double get_balance() {
		return balance;
	}
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		if (amount <= balance) {
			balance -= amount;
		}
		else
		{
			cout << "you don't have enough balance" << endl;
		}
	}
	void transfer_to(double amount, Client& recipient) {
		if (amount <= balance) {
			recipient.balance += amount;
			balance -= amount;
		}
		else {
			cout << "you don't have enough balance";
		}
	}
	void check_balance()
	{
		cout << balance;
	}
	void display()
	{
		Person::display();
		cout << "Balance: " << balance << endl;
	}
};
