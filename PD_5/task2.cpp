#include<iostream>
using namespace std;
float volume(float length,float height,float width);
main()
{
    float length,height,width;
    cout<<"Enter the length of pyramid : ";
    cin>>length;
    cout<<"Enter the width of pyramid : ";
    cin>>width;
    cout<<"Enter the height of pyramid : ";
    cin>>height;
    float finalVolume = volume(length,height,width);
    cout<<"Volume in cubic meter is : "<<finalVolume;
}
float volume(float length,float height,float width)
{
    string unit;
    cout<<"Enter the desired unit (millimeter,meter,centimeter,kilometer) : ";
    cin>>unit;
    float volume1=(length*height*width)/3;
    if(unit=="meter")
    {
        return volume1;
    }
    if(unit=="millimeter")
    {
        volume1=volume1/1000;
        return volume1;

    }
    if(unit=="centimeter")
    {
        volume1=volume1/100;
        return volume1;
   
    }
    if(unit=="kilometer")
    {
        volume1=volume1*1000;
        return volume1;
    }
}
