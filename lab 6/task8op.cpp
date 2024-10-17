#include<iostream>
using namespace std;
float checkdiscount(string purchaseDay,string month,float amount);
main()
{
    float amount;
    string purchaseDay,month;
    cout<<"Enter the purchase day : ";
    cin>>purchaseDay;
    cout<<"Enter the purchase month : ";
    cin>>month;
    cout<<"Enter the amount : ";
    cin>>amount;
    float payableAmount = checkdiscount(purchaseDay,month,amount);
    cout<<"Total payable amount is : "<<payableAmount;
}
float checkdiscount(string purchaseDay,string month,float amount)
{
    if(month=="august" || month=="october" || month=="march")
    {
        if(purchaseDay=="sunday")
        {
        float discount=amount*0.1;
        float payableAmount=amount-discount;
        return payableAmount;
        }
    }
    if(month=="november" || month=="december")
    {
        if(purchaseDay=="monday")
        {
        float discount=amount*0.05;
        float payableAmount=amount-discount;
        return payableAmount;
        }
    }
    else
    return amount;
}