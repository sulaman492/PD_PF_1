#include <iostream>
using namespace std;
void discount(string day);
main()
{
	string day;
	cout<<"Enter the day of purchase : ";
	cin>>day;
	discount (day);

}

void discount(string day)
{
	int price;
	cout<<"Enter the purchase amount : ";
	cin>>price;
	if(day=="sunday")
	{
		price=price - (price*0.1);
		cout<<"Payable amount : "<< price;
	}	

	else
	{
		cout<<"payable amount :"<<price;
	}
}
