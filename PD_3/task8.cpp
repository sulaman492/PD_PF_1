#include <iostream>
using namespace std;
int main()
{

	float price_vegetable;
	float price_fruit;
	int amount_vegetable;
	int amount_fruit;
	float earning;
	cout<<"Enter vegetable price per kilogram ( in coins) :  ";
	cin>>price_vegetable;
	cout<<"Enter fruit price per kilogram  ( in coins ) : ";
	cin>>price_fruit;
	cout<<"Enter total kilogram of vegetable : ";
	cin>>amount_vegetable;
	cout<<"Enter total kilogram of fruits : ";
	cin>>amount_fruit;
	earning=(price_vegetable*amount_vegetable) + (price_fruit*amount_fruit);
	earning=earning*1/1.94;
	cout<<"Total earning in rupees is : "<<earning;	


}