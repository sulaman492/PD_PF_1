#include <iostream>
using namespace std;
int main()
{
	float power;
	float current;
	float volt;
	cout<<"Enter voltage : ";
	cin>>volt;
	cout<<"Enter current : ";
	cin>>current;
	power=volt*current;
	cout<<"The power is : "<<power;

}