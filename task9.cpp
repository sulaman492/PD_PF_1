#include <iostream>
using namespace std;
void fuel_count(float distance); 
main()
{
	float distance;
	cout<<"Enter the distance : ";
	cin>>distance;
        fuel_count(distance);
}

void fuel_count(float distance)
{
	int fuel=100;
	if(distance>10)
	{
		fuel=distance*10;
		cout<<"Fuel needed : "<<fuel;
	}
	else
	{
		cout<<"Fuel needed : "<<fuel;
	}
}