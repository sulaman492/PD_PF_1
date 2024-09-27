#include <iostream>
using namespace std;
int main()
{
	int hours;
	int min;
	int sec;
	cout<<"Enter the number of hours : ";
	cin>>hours;
	min=hours*60;
	sec=min*60;
	cout<<hours<<"hours is equal to  "<<sec<<" seconds";
	
}