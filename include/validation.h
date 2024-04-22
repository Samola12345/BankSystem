#pragma once
#include <iostream>
using namespace std;
class Validation
{
public:
	static bool ValidName(string name)
	{
		for (int i = 0;i < name.size();i++)
		{
			if (!isalpha(name[i]) || name.size() < 5 || name.size() > 20)
			{
				return false;
			}
			else
			{
				return true;
			}
		}

	}
	static bool ValidPassword(string password)
	{
		for (int i = 0;i < password.size();i++)
		{
			if (password.size() < 8 || password.size() > 20)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	static bool ValidSalary(double salary)
	{
		if (salary < 5000)
		{
			return false;
		}
		else
		{
			return true;
		}

	}
	static bool Validbalance(double balance)
	{
		if (balance < 1500)
		{
			return false;
		}
		else
		{
			return true;
		}

	}


};
