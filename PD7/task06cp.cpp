#include <iostream>
using namespace std;
//Header
int calculatePrimorial(int);
main()
{
    //Declaration
    int number,result;
    //Input
    cout<<"Enter Number: ";
    cin>>number;
    //Calling of function from function
    result=calculatePrimorial(number);
    //Output
    cout<<"Primorial: "<<result;
}
int calculatePrimorial(int number)
{
    //Declaration
    int primorial=1;
    int primefound=0;
    //Calling value from function
    for(int i=2; primefound<number; i++)
    {
        bool prime=true;
        for(int x=2; x<i; x++)
        {
            if(i%x==0)//not prime
            {
                prime=false;
                break;
            }            
        }
        if (prime==true)
        {
            primefound=primefound+1;
            primorial=primorial*i;
        }

    }
    return primorial;
}