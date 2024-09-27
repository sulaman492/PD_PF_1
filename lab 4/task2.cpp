#include <iostream>
using namespace std;
void calculate(float);
main()
{
	float inch;
	cout<<"Enter the measurement in inches : ";
	cin>>inch;
	calculate(inch);
	
}
void calculate(float inch)
{
	float foot = inch/12;
	cout<<"eqivalent in feet : "<<foot; 	
}