#include <iostream>
using namespace std;
int main()
{
	int matric;
	int fsc;
	int ecat;
	float agg;
	string name;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter marks in matric : ";
	cin>>matric;
	cout<<"Enter marks in fsc : ";
	cin>>fsc;
	cout<<"Enter marks in ecat : ";
	cin>>ecat;
	ecat=(ecat*100)/400;
	matric=(matric*100)/1100;
	fsc=(fsc*100)/550;
	agg=(ecat*0.5)+(matric*0.1)+(fsc*0.4);
	cout<<"Ecat aggregate of"<<name<< "is" <<agg;
	
}