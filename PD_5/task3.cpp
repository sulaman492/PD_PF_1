#include<iostream>
using namespace std;
float tax(char,float);
main()
{
    char input;
    float price;
    float motocycle,van,sedan,electric,truck;
    cout<<"Enter the price of vehcle : $ ";
    cin>>price;
    cout<<"Enter the vehicle type : ";
    cin>>input;
    tax(input,price);
    cout<<"final price of the vehicle of type "<<input<<" after tax is $ "<<price;

}
float tax(char input,float price)
{
    if(input=='E')
    {
        float tax=price*0.08;
        price=price+tax;
        return price;
    }
     if(input=='M')
    {
        float tax=price*0.06;
        price=price+tax;
        return price;
    }
     if(input=='S')
    {
        float tax=price*0.1;
        price=price+tax;
        return price;
    }
     if(input=='V')
    {
        float tax=price*0.12;
        price=price+tax;
        return price;
    }
     if(input=='T')
    {
        float tax=price*0.15;
        price=price+tax;
        return price;
    }
}