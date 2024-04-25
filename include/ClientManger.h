#pragma once
#include <Employee.h>
#include "FilesHelper.h"
class ClientManger
{
public:

static Client* Login (int id , string password)
 {
    FilesHelper::get_clients();
    if(Employee::search_client(id) != nullptr){
        Client* ptr = Employee::search_client(id);
        if(ptr->get_password()==password)
        {
            return ptr;
        }
        else{
            cout<<"invalid password";
        }
    }
 }
 static void PrintClientMenu ()
 {
    int id;
    string pass;
    cout<<"enter your id and your pass";
    cin>>id>>pass;
    Client* ptr_client= Login(id,pass);
    cout<<"please choose your desired process";
    cout<<"1- deposit"<<endl<<"2- withdraw"<<endl<<"3- Transfer to client"<<endl<<"4- check your balance"<<"5- My account\n";
    cout<<"6- press any key to logout\n";
    int x;
    cin>>x;
    do{
    switch(x){
        case 1:
            cout<<"enter the amount you want to deposit";
            double amount;
            cin>>amount;
            ptr_client->deposit(amount);
            break;
        case 2:
            cout<<"enter the amount you want to withdraw";
            double quantity;
            cin>>quantity;
            ptr_client->withdraw(quantity);
            break;
        case 3:
            {
            int id;
            cout<<"please enter the id you want to transfer to"<<endl;
            cin>>id;
            cout<<"enter the amount you want to tranfer";
            double AMOUNT;
            cin>>AMOUNT;
            Client* reciepent = Employee::search_client(id);
            if(reciepent==nullptr){
                cout<<"not exist";
                break;
            }else{
                ptr_client->transfer_to(AMOUNT,*reciepent);
            }
        }
        break;
        case 4:
            ptr_client->check_balance();
            break;
        case 5:
            ptr_client->display();
            break;

//        default:
//            Screeeen::logout();
        }
    }while (x >= 1 || x <= 6);
 }
 static void UpdatePassword(Person* p)
 {
    FilesHelper::get_clients();
    if(Employee::search_client(p->get_ID()) != nullptr){
        cout<<"enter the new password";
        string pass;
        cin>>pass;
        p->change_password(pass);
        FilesHelper::clear("client","ClientlastId");
        for(int i=0;i<Client::all_clients.size();i++)
            {
                FilesHelper::saveClient(Client::all_clients[i]);
            }
    }
 }
};



