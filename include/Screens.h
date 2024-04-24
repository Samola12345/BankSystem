#ifndef SCREENS_H
#define SCREENS_H


class Screens
{
    public:
        static void Bank_name ()
        {
            cout << "AMS Bank"<<endl;

        }
        static void welcome ()
        {

            cout <<"welcome"<<endl;
        }


        static int login_as()
        {
            cout <<"How can i help you"<<endl;
            cout <<"for Client press 1 " <<endl;
            cout <<"for Employee press 2 " <<endl;
            cout <<"for Admin press 3 " <<endl;
            int x ;
            cin >> x;
            return x;
        }
              static void login_Options()
        {


            switch (login_as()){
            case 1:
                ClientManger::PrintClientMenu();
                break;

            case 2:
                EmployeeManger::PrintEmployeMenu();
                break;
            case 3:
                Adminmaneger::PrintAdminMenu();
            }
        }
};

#endif // SCREENS_H
