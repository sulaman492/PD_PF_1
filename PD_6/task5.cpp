#include<iostream>
#include<string>
using namespace std;
float calculatePrice(string fruitName,string weekDay,int quantity);

main()
{
    string fruitName,weekDay;
    int quantity;
    cout<<"Enter the name of fruit : ";
    cin>>fruitName;
    cout<<"Enter the day of week (e.g saturday , monday) : ";
    cin>>weekDay;
    cout<<"Enter the quantity : ";
    cin>>quantity;
    float price=calculatePrice(fruitName,weekDay,quantity);
    if(price==0)
    {
        cout<<"invalid day or fruit";
    }
    if(price!=0)
    {
        cout<<"total amount : "<<price;
    }

}
float calculatePrice(string fruitName,string weekDay,int quantity)
{
    float price;
    if(weekDay=="monday"||weekDay=="tuesday"||weekDay=="wedenesday"||weekDay=="thursday"||weekDay=="friday")
        {
            if(fruitName=="banana")
            {
                price=2.5;
                price=price*quantity;
                return price;
            }
            if(fruitName=="apple")
            {
                price=1.2;
                price=price*quantity;
                return price;
            }
            if(fruitName=="kiwi")
            {
                price=2.7;
                price=quantity*price;
                return price;
            }
            if(fruitName=="orange")
            {
                price=0.85;
                price=quantity*price;
                return price;
            }
            if(fruitName=="grapefuit")
            {
                price=1.45;
                price=quantity*price;
                return price;
            }
            if(fruitName=="pineapple")
            {
                price=5.5;
                price=quantity*price;
                return price;
            }
            if(fruitName=="grapes")
            {
                price=3.85;
                price=quantity*price;
                return price;
            }
        }
    if(weekDay == "sunday" || weekDay == "saturday")
        {
            if(fruitName=="banana")
            {
            price=2.7;
            price=quantity*price;
            return price;
            }
            if(fruitName=="apple")
            {
            price=1.25;
            price=quantity*price;
            return price;
            } 
            if(fruitName=="orange")
            {
            price=0.9;
            price=quantity*price;
            return price;
            }
            if(fruitName=="kiwi")
            {
            price=3.00;
            price=quantity*price;
            return price;
            }
            if(fruitName=="pineapple")
            {
            price=5.6;
            price=quantity*price;
            return price;
            }
            if(fruitName=="grapes")
            {
            price=4.2;
            price=quantity*price;
            return price;
            }
            if(fruitName=="grapefruit")
            {
            price=1.6;
            price=quantity*price;
            return price;
            }

        }
    if((weekDay!="monday"&&weekDay!="sunday"&&weekDay!="tuesday"&&weekDay!="wednesday"&&weekDay!="thursday"&&weekDay!="friday"&&weekDay!="saturday")||(fruitName!="kiwi"&&fruitName!="banana"&&fruitName!="apple"&&fruitName!="grapes"&&fruitName!="grapefruit"&&fruitName!="orange"&&fruitName!="pineapple"))
        {
            return 0;
        }
        
        
    
}