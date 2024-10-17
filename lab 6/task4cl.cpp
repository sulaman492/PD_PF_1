#include<iostream>
using namespace std;
int findGreatest(int number1,int number2,int number3);
main()
{
    int number1,number2,number3;
    cout<<"Enter first number : ";
    cin>>number1;
    cout<<"Enter second number : ";
    cin>>number2;
    cout<<"Enter third number : ";
    cin>>number3;
    int result=findGreatest(number1,number2,number3);
    cout<<"the greatest number among "<<number1 <<" "<<number2 <<" "<<number3<<" is "<<result;

}
int findGreatest(int number1,int number2,int number3)
{
    if(number1>number2 && number1>number3)
    {
        return number1;
    }
    if(number2>number3 && number2>number1)
    {
        return number2;
    }
    else 
    return number3;
}