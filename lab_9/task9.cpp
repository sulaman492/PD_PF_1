#include<iostream>
using namespace std;

string calculatebill(float);
float array[4];
main()
{
    
    float totalAmount;
    cout<<"Enter quarter : ";
    cin>>array[0];
    cout<<"Enter dime : ";
    cin>>array[1];
    cout<<"Enter nickel : ";
    cin>>array[2];
    cout<<"Enter penny : ";
    cin>>array[3];
    cout<<"Enter the total amount due : ";
    cin>>totalAmount;
    string result=calculatebill(totalAmount);
    cout<<result;
}

string calculatebill(float totalAmount)
{
    array[0]=array[0]*0.25;
    array[1]=array[1]*0.1;
    array[2]=array[2]*0.05;
    array[3]=array[3]*0.01;
    float sum=array[0]+array[1]+array[2]+array[3];
    if(sum>totalAmount)
    {
        return "true";
    }
    if(sum<totalAmount)
    {
        return "false";
    }

}