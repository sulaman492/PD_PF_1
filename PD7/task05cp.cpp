#include <iostream>
using namespace std;
//Header
bool isPrime (int);
main()
{
    //Declaration
    int number;
    bool result;
    //Input
    cout<<"Enter a number: ";
    cin>>number;
    //Calling values from function
    result=isPrime(number);
    //Output
    cout<<result;
}
bool isPrime(int number)
{
    for(int factor=2; factor<number; factor++)
    {
        if(number%factor==0 ) 
        {
            return false;//Not prime
        }
    }  
    if (number<2)
    {
        return false;
    }            
        return true;
}