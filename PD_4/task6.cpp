#include <iostream>
using namespace std;
void longest(int hours,int minutes);
main()
{
	int hours,minutes;
	cout<<"Enter the number of hours : ";
	cin>>hours;
	cout<<"Enter the number of minutes : ";
	cin>>minutes;
	longest(hours,minutes);	
}
void longest(int hours,int minutes)
{
	int convert=hours*60;
	if(convert>minutes)
	{
		cout<<hours;
	}

	if(convert<minutes)
	{
		cout<<minutes;
	}
}