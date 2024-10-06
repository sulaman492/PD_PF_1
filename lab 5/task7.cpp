#include <iostream>
#include <cmath>
using namespace std;
bool symmetrical(int number);
main()
{
    
    int number;
    cout<<"Enter a three digit number : ";
    cin>>number;
    if(number<1000 and number>99)
    {
            bool result=symmetrical(number);
            if(result==true)
            {
                cout<<"The number is symmetrical : ";
            }
            if(result==false)
            {
                cout<<"the number is not symmetrical : ";
            }
    }        
}
bool symmetrical (int number)
{
    int first=number/100;
    int last=number%10;
    if(first==last)
    {
        return true;
    }
    if(first!=last)
    {
        return false;
    }
}