#include <iostream>
using namespace std;
void vote(int age);
main()
{
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	vote(age);
}
void vote(int age)
{
	if(age==18 or age>18)
	{
		cout<<"You are eligible for vote ";
	}
	else
	{
		cout<<"You are not eligible for vote ";
	}
}