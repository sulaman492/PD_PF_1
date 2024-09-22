#include <iostream>
using namespace std;
int main()
{

	
	int number;
	int sum;
	int first;
	int second;
	int third;
	int fourth;
	cout<<"Enter a four digit number : ";
	cin>>number;
	first=number/1000;
	second=(number/100)%10;
	third=(number/10)%10;
	fourth=number%10;
	sum=first + second + third + fourth;
	cout<<"Sum of individual digit is : "<<sum;
}




