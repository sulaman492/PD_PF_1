#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    cout<<"Enter speed : ";
    cin>>speed;
    string result = checkSpeed(speed);
    cout<<result;
}
string checkSpeed(float speed)
{
    string speed2;
    if(speed<10)
    {
        speed2 = "slow";
    }
    if(speed>10 && speed<50)
    {
        speed2 =  "average";
    }
    if(speed>50 && speed<150)
    {
        speed2 = "fast";
    }
    if(speed>150)
    {
        speed2 =  "ultra-fast";
    }
    return speed2;
    
}