#include <iostream>
using namespace std;
void flowershop(float red,float white,float tulip);
main()
{
	float red,white,tulip;
	cout<<"Enter the number of red roses : ";
	cin>>red;
	cout<<"Enter the number of white roses : ";
	cin>>white;
	cout<<"Enter the number of tulip : ";
	cin>>tulip;
	flowershop(red,white,tulip);

}
void flowershop(float red,float white,float tulip)
{
	red=red*2;
	white=white*4.10;
	tulip=tulip*2.5;
	float original_price=red+white+tulip;
	if(original_price>100)
	{
		cout<<"Original price : "<<original_price<<endl;
		original_price=original_price-(original_price*0.2);
		cout<<"Original price after discount : "<<original_price;
	}	
	if(original_price<100)
	{
		cout<<"Original price : "<<original_price;	
	}

}