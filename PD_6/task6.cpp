#include<iostream>
#include<string>
using namespace std;
float calculateAmount(string month,int stay);
float calculateAmount2(string month , int stay);

main()
{
    string month;
    int stay;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the number of stays : ";
    cin>>stay;
    float amount1=calculateAmount(month,stay);
    float amount2=calculateAmount2(month,stay);
    cout<<"Apartment : "<<amount2<<endl;
    cout<<"Studio : "<<amount1;

}
float calculateAmount(string month,int stay)
{
    float amount;
    float discount;
    if((stay>7 && stay<15) && (month=="may" || month=="october"))
    {
        amount=50;
        discount=stay*0.05;
        amount=amount-discount;
    }
    if(stay>14 && (month=="october" || month=="may"))
    {
        amount=50;
        discount=stay*0.3;
        amount=amount-discount;
    }
    if(stay>14 && (month=="june" || month=="september"))
    {
        amount=75.2;
        discount=stay*0.2;
        amount=amount-discount;
    }
    if(stay<7 && (month=="may" || month=="october"))
    {
        amount=stay*50;
    }
    if(stay<15 && (month=="june"||month=="september"))
    {
        amount=stay*75.2;
    }
    if(month=="july"||month=="august")
    {
        amount=stay*76;
    }
    return amount;
}
float calculateAmount2(string month , int stay)
{
    float amount;
    float discount;
    if(stay>14 && (month=="may"||month=="october"))
    {
        amount=65;
        discount=stay*0.1;
        amount=amount-discount;
    }
    if(stay<15 && (month=="may"||month=="october"))
    {
        amount=stay*65;
    }
    if(stay>14 && (month=="june"||month=="september"))
    {
        amount=68.7;
        amount=stay*0.1;
        amount=amount-discount;
    }
    if(stay<15 && (month=="june"||month=="september"))
    {
        amount=stay*68.7;
    }
    if(stay>14 && (month=="july"||month=="august"))
    {
        amount=77;
        amount=stay*0.1;
        amount=amount-discount;
    }
    if(stay>14 && (month=="july"||month=="august"))
    {
        amount=stay*77;
    }
    return amount;

}