#include<iostream>
using namespace std;
float shortestdistance(float km , string time);
main()
{
    float km;
    string time;
    cout<<"Enter the number of kilometer : ";
    cin>>km;
    cout<<"enter the time of day : ";
    cin>>time;
    float result = shortestdistance(km , time);
    cout<<"Lowest price for "<<km<<" km will be "<<result;
}
float shortestdistance(float km , string time)
{
    float price;
    if(km<20 && time=="day")
    {
        price=0.7 + (km*0.79);
    }
    if(km<20 && time=="night")
    {
        price=0.7 + (km*0.9);
    }    
    if(km>20 && km<100 && time=="day")
    {
        price=km*0.09;
    }
    if(km>20 && km<100 && time=="night")
    {
        price=km*0.09;
    }
    if(km>=100 && time=="day")
    {
        price=km*0.06;
    }
    if(km>=100 && time=="night")
    {
        price=km*0.06;
    }
    return price;
}