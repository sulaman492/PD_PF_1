#include<iostream>
#include<conio.h>
using namespace std;
int calculatetime(int neededHours,int workers,int daysleft);
main()
{
    int neededHours,workers,daysleft;
    cout<<"Enter the needed hours : ";
    cin>>neededHours;
    cout<<"Enter the days the firm has : ";
    cin>>daysleft;
    cout<<"Enter the number of all worker : ";
    cin>>workers;
    int time = calculatetime(neededHours,workers,daysleft);
    if(time>neededHours)
    {
        cout<<"Yes! "<<time-neededHours<<" hours left";
    }
    if(time<neededHours)
    {
        cout<<"No! "<<neededHours-time<<" hours required";
    }
 
}
int calculatetime(int neededHours,int workers,int daysleft)
{
    int time=daysleft*10;
    time=time-(time*0.1);
    time=time*workers;
    return time;
}