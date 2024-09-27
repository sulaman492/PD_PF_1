#include <iostream>
using namespace std;
void distance(int);
main()
{
	int d;
	cout<<"Enter the distance : ";
	cin>>d;
	distance(d);
}
void distance(int fuel)
{
	
	fuel =fuel*10;
	cout<<"fuel needed"<<fuel;	

}

