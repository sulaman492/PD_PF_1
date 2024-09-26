#include <iostream>
using namespace std;
void result(int);
main()
{
	int number;
	cout<<"Enter your score : ";
	cin>>number;
	result(number);

}
void result(int number)
{
	if (number >50)
	{
		cout<<"You are pass : ";
	}
	else
	{
		cout<<"You are fail : ";
	}

}