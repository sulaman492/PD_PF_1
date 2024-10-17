#include<iostream>
#include<string>
using namespace std;
float calculateDueAmount(char service,int minute,string time);

main()
{
    char service;
    string service1;
    int min;
    string time;
    cout<<"Enter the service code (R/r for regular P/p for premium) : ";
    cin>>service;
    if(service=='P' || service=='p')
    {
        cout<<"Enter the time of call (D/d for day N/n for night) : ";
        cin>>time;
    }
    cout<<"Enter the number of minutes : ";
    cin>>min;
    float result = calculateDueAmount(service,min,time);
    if(service=='p'||service=='P')
    {
        service1="premium";
    }
    if(service=='r'||service=='R')
    {
        service1="regular";
    }
    cout<<"Service type : "<<service1<<endl;
    cout<<"minute used : "<<min<<endl;
    cout<<"Amount due : "<<result;
}
float calculateDueAmount(char service,int minute,string time)
{
    if(service=='P' || service=='p')
    {
        if(time=="d"||time=="D")
        {
            float dueAmount=25;
            if(minute<76)
            {
                float dueAmount=25;
                return dueAmount;
            }
            if(minute>75)
            {
                minute=minute-75;
                dueAmount=dueAmount+(0.1*minute);
                return dueAmount;
            }   
        }
        if(time=="n"||time=="N")
        {
            float dueAmount=25;
            if(minute<101)
            {
                float dueAmount=25;
                return dueAmount;
            }
            if(minute>100)
            {
                minute=minute-100;
                dueAmount=dueAmount+(0.05*minute);
                return dueAmount;
            }   
        }
    }
    if(service=='r' || service=='R')
    {
        float dueAmount=10;
        if(minute<50)
        {
            return dueAmount;
        }
        if(minute>50)
        {
            minute=minute-50;
            dueAmount=dueAmount+(0.2*minute);
            return dueAmount;
        }
        
    }
}