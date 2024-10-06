#include <iostream>
#include <cmath>
using namespace std;
void time_travel(int hours,int minute);
main()
{
    int hours,minute;
    cout<<"Enter Hours : ";
    cin>>hours;
    cout<<"Enter minutes : ";
    cin>>minute;
    time_travel(hours,minute);
}
void time_travel(int hours,int minute)
{
    minute=minute+15;
    if(minute>60)
    {
        hours=hours+1;
        minute=minute-60;
       //cout<<hours<<" : "<<minute;
    }
    if(hours>23)
    {
        hours=0;
    }
    cout<<hours<<" : "<<minute;
    
    
}

    
