#include<iostream>
using namespace std;
void sales(int amount);
int main()
{
	int purchase_amount;
	cout<<"enter the purchase amount : ";
	cin>>purchase_amount;
	sales(purchase_amount);
}

void sales(int amount)
{
	string day;
	cout<<"Enter the day of purchase : ";
	cin>>day;
	if(day=="sunday")
	{
		amount=amount-(amount*0.1);
		cout<<"total payable amount is : "<<amount;
	}
	else
	{
		amount=amount-(amount*0.05);
		cout<<"total payable amount is : "<<amount;
	}
}