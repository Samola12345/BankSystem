#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"
class FileManager:public DataSourceInterface
{
public:
   void addAdmin(Client c)
   {
	   FilesHelper::saveClient(c);
   }
   void addEmployee(Employee e)
   {
	   FilesHelper::saveEmployee(e,"Empolyee.txt","EmplyeeLastId");
   }
   void addAdmin(Admin a)
   {
	   FilesHelper::saveEmployee(a, "Admin.txt", "adminLastId");
   }
   void getAllClients()
   {
	   FilesHelper::get_clients();
   }
   void getAllEmployees()
   {
	   FilesHelper::get_employees();
   }
   void getAllAdmins()
   {
	   FilesHelper::get_admins();
   }
   void removeAllClients()
   {
	   FilesHelper::clear("Client.txt", "ClientLastId.txt");
   }
   void removeAllEmployees()
   {
	   FilesHelper::clear("Empolyee.txt", "EmplyeeLastId");
   }
   void removeAllAdmins()
   {
	   FilesHelper::clear("Admin.txt", "adminLastId");
   }

};
