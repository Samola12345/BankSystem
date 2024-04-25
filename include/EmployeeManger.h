#pragma once
#ifndef EMPLOYEEMANGER_H
#define EMPLOYEEMANGER_H
#include "ClientManger.h"
class EmployeeManger
{
public:
    static void PrintEmployeMenu()
    {
        int id;
        string pass;
        cout<<"enter your id and pass";
        cin>>id>>pass;
        Employee* e=Login(id,pass);
        int x;
        do{
            cout<<"1- add client"<<endl<<"2- search client"<<"3- list clients"<<endl<<"4- edit client"<<endl<<"5- display"<<endl;
            cout<<"6- press any key to logout";
            cin>>x;
            switch(x){
                case 1:
                    NewClient(e);
                    break;
                case 2:
                    SearchForClient(e);
                    break;
                case 3:
                    ListAllClients(e);
                    break;
                case 4:
                    EditClientInfo(e);
                    break;
                case 5:
                    e->display();
                    break;
                default:
                    Screens::logout();
            }while (x >= 1 || x <= 6);
        }

    }
    static void NewClient(Employee* e)
    {
        FilesHelper::get_employees();
        if(Admin::search_employee(e->get_ID())==nullptr){
            return;
        }

        else{
            cout<<"enter the name and the pass and the balance";
            string name,pass;
            double balance;
            cin>>name>>pass>>balance;
            Client c(name,pass,balance);
            FilesHelper::saveClient(c);
        }
    }
    static void ListAllClients(Employee* e)
    {

        FilesHelper::get_employees();
        if(Admin::search_employee(e->get_ID())==nullptr){
            return;
        }

        else{
        FilesHelper::get_clients();
        for(int i=0;i<all_clients.size();i++){
            cout<<all_clients[i].display()<<endl;
            }
        }
    }
    static void SearchForClient(Employee* e)
    {
        FilesHelper::get_employees();
        if(Admin::search_employee(e->get_ID())==nullptr){
            return;
        }

        else{
            int id;
            cout<<"the search id"<<endl;
            cin>>id;
            FilesHelper::get_clients();
            Client* ptr=Employee::search_client(id);
            if(ptr==nullptr){
                cout<<"No client is found"<<endl;
            }else{
                ptr->display();
            }
        }
    }
    static void EditClientInfo(Employee* e)
    {
        FilesHelper::get_employees();
        if(Admin::search_employee(e->get_ID())==nullptr){
            return;
        }else{
            cout<<"please enter the id you want to edit";
            int id;
            cin<<id;
            Client* ptr=Employee::search_client(id);
            if(ptr==nullptr){
                cout<<"No client is found"<<endl;
            }else{
                cout<<"enter the updated data(name, pass,balance)"<<endl;
                string name,pass;
                double balance;
                cin>>name>>pass>>balance;
                Employee::edit_client(ptr->id,name,pass,balance);
                FilesHelper::clear("client","ClientlastId");
                for(int i=0;i<Client::all_clients.size();i++){
                    FilesHelper::saveClient(all_clients[i]);
                   }
                }
        }
    }
    static Employee* Login (int id ,string password)
    {
        FilesHelper::get_employees();
        if(Admin::search_employee(id)!= nullptr){
            Employee* ptr = Admin::search_employee(id);
        if(ptr->get_password()==password)
        {
            return ptr;
        }
        else{
            cout<<"invalid password";
            }
        }
    }
    static bool EmployeeOptions(Client* c)
    {

    }
};

#endif // EMPLOYEEMANGER_H
