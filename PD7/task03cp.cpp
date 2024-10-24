#include <iostream>
using namespace std;
//Header
void amplifier(int);
main()
{
    //Declaration
    int number;
    //Input
    cout<<"Enter the number to Amplify: ";
    cin>>number;
    //Calling of function
    amplifier(number);
    if (number<1)
    {
        cout<<"Invalid number";
    }
}
void amplifier(int number)
{
    //Declaration
    int result=0;
    for (int x=1; x<=number; x=x+1)
    {
        result=x; 
        if (result%4==0)
        {
            result=result*10;
        }
        cout<<result<<",";
    }
}