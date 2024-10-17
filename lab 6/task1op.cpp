#include<iostream>
using namespace std;
int checknumber(int number1,int number2);
main()
{
    int number1,number2;
    cout<<"Enter first number : ";
    cin>>number1;
    cout<<"Enter second number : ";
    cin>>number2;
    int result= checknumber(number1,number2);
    cout<<result;
}
int checknumber(int number1,int number2)
{
    if(number1>number2)
    {
        return 0;
    }
    else
    return 1;

}