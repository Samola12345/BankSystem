//#include"Parser.h"
#include"Client.h"
//#include"Admin.h"
//#include"Employee.h"
#include "iostream"
#include"FilesHelper.h"

using namespace std;

int main()
{
    ///heloooooooooooooooooooo
    ///nonannonymos test
    ///hello world
    // Annonymous test

	/*fstream file;
	file.open("Clients.txt", ios::out);
	file << "Client 1";
	file.close();*/

	/*fstream AdminsFile("Admin.txt", ios::out);
	fstream ClientsFile("Client.txt", ios::out);
	fstream EmpolyeesFile("Employee.txt", ios::out);*/

//	Admin a1;
//	Client c1;


//	Employee e1;
//	Employee e2;
//	c1.set_name("Samuel");
//	c1.set_password("jdjdjdjd");
//	c1.set_balance(100000);
//	FilesHelper::saveClient(c1);
//	c1.display();
//	cout << "the next client"<<endl;
//    Client c2;
//	c2.set_name("moostafe");
//	c2.set_password("jlkjdfgkjdf");
//	c2.set_balance(500000);
//	FilesHelper::saveClient(c2);
//    c2.display();

    Client cc;
    string name = "wjkhutf1";
    cc.set_name(name);
    cc.set_password("wtppoiuf123");
    cc.set_balance(3984);
    FilesHelper::saveClient(cc);
    cc.display();

    Client cc2;
    string name2 = "wjkhutf2";
    cc2.set_name(name2);
    cc2.set_password("wtppoiuf123");
    cc2.set_balance(3984);
    FilesHelper::saveClient(cc2);
    cc2.display();

    Client cc3;
    string name3 = "wjkhutf3";
    cc3.set_name(name3);
    cc3.set_password("wtppoiuf123");
    cc3.set_balance(3984);
    FilesHelper::saveClient(cc3);
    cc3.display();

    Client cc4;
    string name4 = "wjkhutf4";
    cc4.set_name(name4);
    cc4.set_password("wtppoiuf123");
    cc4.set_balance(3984);
    FilesHelper::saveClient(cc4);
    cc4.display();

    Client cc5;
    string name5 = "wjkhutf5";
    cc5.set_name(name5);
    cc5.set_password("wtppoiuf123");
    cc5.set_balance(3984);
    FilesHelper::saveClient(cc5);
    cc5.display();

    Client cc6;
    string name6 = "wjkhutf6";
    cc6.set_name(name6);
    cc6.set_password("wtppoiuf123");
    cc6.set_balance(3984);
    FilesHelper::saveClient(cc6);
    cc6.display();

}
