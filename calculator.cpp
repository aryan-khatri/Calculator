#include<iostream>
using namespace std;
int main()
{
    cout<<"****************************\n";
    cout<<"CALCULATOR"<<endl;
    cout<<"****************************\n";
    cout<<"For login Authentication\n";
    int userid, password;
    cout<<"****************************\n";
    cout<<"Enter your user ID-:";
    cin>>userid;
    cout<<"Enter your password-:";
    cin>>password; 
    cout<<"****************************\n";
    //this command is not worrking in c++
    //(strcmp(username,"aryan-khatri")==0 && strcmp(password,"aryan")==0)
    if(userid==10004)
    {
    if(password==1234)
    {
    cout<<"Access Granted\n";
    cout<<"***************************\n";
    cout<<"Welcome to ARYAN\n";
    cout<<"***************************\n";
    cout<<"1 is for sum"<<endl;
    cout<<"2 is for substraction"<<endl;
    cout<<"3 is for multiply"<<endl;
    cout<<"4 is for devide"<<endl;
    cout<<"****************************\n";
    int choise;
    double a,b;
    cout<<"Enter your choise-:";
    cin>>choise;
    cout<<"****************************\n";
    cout<<"Enter the value of a-:";
    cin>>a;
    cout<<"Enter the value for b-:";
    cin>>b;
    cout<<"****************************\n";
    switch(choise)
    {
        case 1:
        cout<<"the value of sum "<<a<<" & "<<b<<" = "<<a+b;
        cout<<"\n***************************\n";
        break;
        case 2:
        cout<<"the value of substraction "<<a<<" & "<<b<<" = "<<a-b;
        cout<<"\n***************************\n";
        break;
        case 3:
        cout<<"the value of multiply "<<a<<" & "<<b<<" = "<<a*b;
        cout<<"\n***************************\n";
        break;
        case 4:
        cout<<"the value of devide "<<a<<" & "<<b<<" = "<<a/b;
        cout<<"\n***************************\n";
        break;
        default:
        cout<<"wrong choise";
        cout<<"\n****************************";
        break;
    }
    }
    else
    {
        cout<<"Access Denied\n";
        cout<<"Re-Enter Your password";
    }
    }
    else
    {
        cout<<"Wrong USer id\n";
        cout<<"Re-enter Your User id";
    }
    return 0;
}