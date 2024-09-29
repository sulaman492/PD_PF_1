#include <iostream>
using namespace std;
void price(string);
main()
{
	string country_name;
	cout<<"Enter the country name : ";
	cin>>country_name;
	price(country_name);
}
void price(string country_name)
{
	float ticket_price;
	cout<<"Enter the ticket price in dollars : $ ";
	cin>>ticket_price;
	if(country_name=="pakistan")
	{
		ticket_price=ticket_price - (ticket_price*0.05);
		cout<<"ticket price after discount is : $"<<ticket_price;	
	}

	if(country_name=="ireland")
	{
		ticket_price=ticket_price - (ticket_price*0.1);
		cout<<"ticket price after discount is : $"<<ticket_price;	
	}

	if(country_name=="india")
	{
		ticket_price=ticket_price - (ticket_price*0.2);
		cout<<"ticket price after discount is : $"<<ticket_price;	
	}

	if(country_name=="england")
	{
		ticket_price=ticket_price - (ticket_price*0.3);
		cout<<"ticket price after discount is : $"<<ticket_price;	
	}

	if(country_name=="canada")
	{
		ticket_price=ticket_price - (ticket_price*0.45);
		cout<<"ticket price after discount is :"<<ticket_price;	
	}

}
