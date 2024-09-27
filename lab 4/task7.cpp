#include <iostream>
using namespace std;
void even(int number);
main()
{
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	even(number);	
}
void even(int number)
{
	if(number%2==0)
	{
		cout<<"Even number";
	}
	else
	{ 
		cout<<"Odd number";
	}
}
