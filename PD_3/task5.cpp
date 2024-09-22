#include <iostream>
using namespace std;
int main()
{

	float weight;
	float days;
	string name;
	cout<<"Enter the name of person : ";
	cin>>name;
	cout<<"Enter the target weight loss in kilogram : ";
	cin>>weight;
	days=weight*15;
	cout<< name <<" will need " << days <<" days to lose " <<weight << " of weight";	
}