#include <iostream>
using namespace std;
//Header
int triangularDots(int);
main()
{
    //Declaration
    int number,result;
    //Input
    cout<<"Enter number of triangle: ";
    cin>>number;
    //Calling values from function
    result=triangularDots(number);
    //Output
    cout<<"Total dots in triangle: "<<result;
}
int triangularDots(int number)
{
    //Declaration
    int conclusion=0,addedNum=1;
    for(int x=1; x<=number ;x=x+1)
    {
        conclusion=conclusion+addedNum;
        addedNum=addedNum+1;
    }
    return conclusion;
}