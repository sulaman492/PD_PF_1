#include <iostream>
using namespace std;
int main()
{
	float mb;
	float kb;
	float byte;
	float bit;
	cout<<"Enter the size in megabytes (MB)";
	cin>>mb;
	bit=0.000000125*mb;
	cout<<mb<<"MB is equal to "<<bit<<"bit";
	
}