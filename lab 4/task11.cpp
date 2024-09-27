#include<iostream>
using namespace std;
void printname(string n);
main()
{
	string name;	
	cout<<"Enter your name : ";
	cin>>name;
	printname(name);
}
void printname(string n)
{	
	while(true)
	{
		
		cout<<n <<endl;
	}	
}