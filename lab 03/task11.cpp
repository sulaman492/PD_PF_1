#include <iostream>
using namespace std;
int main()
{

	int population;
	int n;
	int new_pop;
	cout<<"Enter the current world population : ";
	cin>>population;
	cout<<"Enter the monthly birth rate : ";
	cin>>n;
	new_pop=(n*12)*30;
	new_pop=new_pop+population;
	cout<<"The population in three decades will be : "<<new_pop;
	

	
}