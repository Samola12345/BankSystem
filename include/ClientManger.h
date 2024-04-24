#pragma once
#include <person.h>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
class ClientManger
{
public:

 static Client* Login (int id , string password)
 {
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
    Client* ptr_client= Login(ptr_client->get_ID(),ptr_client->get_password());
    cout<<"please choose your desired process";
    cout<<"1- deposit"<<endl<<"2- withdraw"<<endl<<"3- Transfer to client"<<endl<<"4- check your balance"<<"5- My account\n";
    int x;
    cin>>x;
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
    }
 }
 static void UpdatePassword(Person* p)
 {

 }
 static bool ClientOptions(Client* c)
 {

 }




};


