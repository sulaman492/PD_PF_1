#include <iostream>
using namespace std;
void table(int);
main()
{
    int number;

    cout<<"enter the number  : ";
    cin >> number;
    
        table(number);
}
void table(int number)
{
	int multiple;
    
    for(int x = 1; x <= 10;x = x + 1)
    {
    multiple = number * x ;
    cout<<number <<" * "<< x <<" = "<<multiple<<"\n";
    }
}