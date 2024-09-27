#include <iostream>
using namespace std;
int main()
{
	float charge;
	float time;
	float current;
	cout<<"Enter the charge : ";
	cin>>charge;
	cout<<"Enter the time : ";
	cin>>time;
	current=charge/time;
	cout<<"The current I is : "<<current;
}