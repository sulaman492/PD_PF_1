#include<iostream>
using namespace std;
string checkStatus(int age,string gender);
main()
{
    int age;
    string gender;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your gender : ";
    cin>>gender;
    checkStatus(age,gender);
}
string checkStatus(int age,string gender)
{

    if(age>=16 && gender=="m")
    {
        cout<<"your personal title is : Mr.";
    }
     if(age>=16 && gender=="f")
    {
        cout<<"your personal title is : Ms.";
    }
     if(age<16 && gender=="m")
    {
        cout<<"your personal title is : Master";
    }
     if(age<16 && gender=="f")
    {
        cout<<"your personal title is : Miss";
    }
    
}