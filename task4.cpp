#include <iostream>
using namespace std;
void calculator(float num1,float num2);
main()
{
	
	float num1;
	float num2;
	float result;
	cout<<"Enter first number";
	cin>>num1;	
	cout<<"Enter second number";
	cin>>num2;	
	calculator(num1,num2);	


}
void calculator(float num1,float num2)
{
	string op;
	cout<<"Enter the function you want to perform : ";
	cin>>op;
	if(op=="+")
	{
		float result=num1+num2;
		cout<<"Addition is : "<<result;
	}
	if(op=="-")
	{
		float result=num1-num2;
		cout<<"difference is : "<<result;
	}
	if(op=="*")
	{
		float result=num1*num2;
		cout<<"product is : "<<result;
	}
	if(op=="/")
	{
		float result=num1/num2;
		cout<<"division is : "<<result;
	}

}