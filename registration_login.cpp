#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
    
    int c;
    cout<<"\t\t\t______________________________________\n\n\n";
    cout<<"\t\t\t        Welcome to Login Page          \n\n\n";
    cout<<"\t\t\t____________     Menu     _____________\n\n\n";
    cout<<"                                                 \n\n";     
    cout<<"\t| Press 1 to Login     |"<<endl;
    cout<<"\t| Press 2 to Registration     |"<<endl;
    cout<<"\t| Press 3 to Forgot Password?     |"<<endl;
    cout<<"\t| Press 4 to Exit     |"<<endl;
    cout<<"\n\t\t\t Enter Your Choice: ";
    cin>>c;
    cout<<endl;
    
    switch (c)
    {
    case 1:
        login();
        break;
     case 2:
        registration();
        break;
     case 3:
        forgot();
        break;
    case 4:
        cout<<"\t\t\t Thankyou! \n\n";
    default:
        system("cls");
        cout<<"\t\t\t Please select from the options given above  \n"<<endl;
        main();
    }
}

    void login()
    {
        int count;
        string userId, password, id, pass;
        system("cls");
        cout<<"\t\t\t Please enter your username and password:  "<<endl;
        cout<<"\t\t\t USERNAME: ";
        cin>>userId;
        cout<<"\t\t\t PASSWORD: ";
        cin>>password;

        ifstream input("records.txt"); //ifstream will check the file if userID is already existed 

        while(input>>id>>pass){
            if(id==userId && pass==password)
            { 
                count=1; //
                system("cls");
             }
        }
        input.close();
        if(count==1){
            cout<<userId<<"\n Your LOGIN is successfull \n Thanks for logging in ! \n";
            main();
        }
        else{
            cout<<"\n LOGIN ERROR \n Please check your username and password.\n";
            main();
        }

    }

    void registration()
    {
        string r_userId, r_password, r_id, r_pass;
        system("cls");
        cout<<"\t\t\t Enter the Username : ";
        cin>>r_userId;
        cout<<"\t\t\t Enter the Password : ";
        cin>>r_password;

        ofstream f1("records.txt",ios::app); //to write inside the record file...
        f1<<r_userId<<' '<<r_password<<endl;
        system("cls");
        cout<<"\n\t\t\t Registration is succesfull! \n";
        main();
    }

    void forgot()
    {
        int option;
        system("cls");
        cout<<"Press 1 to search your id by username"<<endl;
        cout<<"Press 2 to go back to main menu"<<endl;
        cout<<"\t\t\t Enter your choice: ";
        cin>>option;
        switch(option)
        {
            case 1:
            {
                int count=0;
                string s_userId, s_id, s_pass;
                cout<<"\n\t\t\t Enter the username which you remembered : ";
                cin>>s_userId;

                ifstream f2("records.txt");
                while(f2>>s_id>>s_pass)
                {
                    if(s_id==s_userId)
                    {
                        count=1;
                    }
                }
                f2.close();
                if (count==1)
                {
                    cout<<"\n\n Your account is found! \n";
                    cout<<"\n\n Your password is: "<<s_pass;
                    main();
                }
                else{
                    cout<<"\n\t Sorry! your account is not found! \n";
                    main();
                }
                break;
                
            }

            case 2:
            {
                main();
            }
            default:
                cout<<"\t\t\t Please Choose Correct Option! "<<endl;
                forgot();
        }
    }
