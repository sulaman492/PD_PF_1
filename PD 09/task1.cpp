#include<iostream>
using namespace std;
int calculatePrice(string fruit[],float price[],string fruitname,int amount);
main()
{
    string fruit[4]={"peach" , "apple" , "guava" , "watermelon"};
    float price[4]={60,70,40,30};
    string fruitname;
    int amount;
    cout<<"Enter the name of fruit : ";
    cin>>fruitname;
    cout<<"Enter the ampount in kg : ";
    cin>>amount;
    int totalprice=calculatePrice(fruit,price,fruitname,amount);
    cout<<"Total price is : "<<totalprice;
    
}
int calculatePrice(string fruit[],float price[],string fruitname,int amount)
{
    int idx=-1;
    for(int i=0;i<4;i++)
    {
        if(fruit[i]==fruitname)
        {
            idx=i;
        }
    }
    int calclatePrice=price[idx]*amount;
    return calclatePrice;
}