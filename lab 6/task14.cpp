#include<iostream>
using namespace std;
int calculateMoney(int budget,string category,int people);
float howMuch;
float left1;
float price;
main()
{
    int budget,people;
    string category;
    cout<<"Enter the budget :";
    cin>>budget;
    cout<<"Enter the category of ticket : ";
    cin>>category;
    cout<<"Enter the number of people in group : ";
    cin>>people;
    int result=calculateMoney(budget,category,people);
    if(result==1)
    {
        cout<<"no you dont have eough money you need "<<howMuch<<" more";
    }
    if(result==0)
    {
        cout<<"yes you have "<<left1<<" left";
    }
        
}
int calculateMoney(int budget,string category,int people)
{
    if(people>0 && people<5)
    {
        budget=budget-(budget*0.75);
    }
    if(people>4 && people<10)
    {
        budget=budget-(budget*0.6);
    }
    if(people>9 && people<25)
    {
        budget=budget-(budget*0.5);
    }
    if(people>24 && people<50)
    {
        budget=budget-(budget*0.4);
    }
    if(people>50)
    {
        budget=budget-(budget*0.3);
    }
    if(category=="VIP"||category=="vip")
    {
        price=499.99*people;
        if(price>budget)
        {
            howMuch=price-budget;
            return 1;
        }
        if(price<budget)
        {
            left1=budget-price;
            return 0;
        }
    }
    if(category=="normal"||category=="NORMAL")
    {
        float price=249.99*people;
        if(price>budget)
        {
            howMuch=price-budget ;
            return 1;
        }
        if(price<budget)
        {
            left1=budget-price;
            return 0;
        }
    }
}