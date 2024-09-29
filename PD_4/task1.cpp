#include <iostream>
using namespace std;
void equal(int num1,int num2);
main()
{
	int n1,n2;
	cout<<"Enter your first number : ";
	cin>>n1;
	cout<<"Enter your second number : ";
	cin>>n2;
	equal(n1,n2);	
	
}
void equal(int num1,int num2)
{
	string result;
	if(num1==num2)
	{
		result="TRUE";
		cout<<result;
	}
	if(num1!=num2)
	{
		result="FALSE";
		cout<<result;
	}
}