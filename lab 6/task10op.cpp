#include<iostream>
using namespace std;
int findequal(int number1,int number2,int number3);
main()
{
    int number1,number2,number3;
    cout<<"Enter first number : ";
    cin>>number1;
    cout<<"Enter second number : ";
    cin>>number2;
    cout<<"Enter third number : ";
    cin>>number3;
    int result=findequal(number1,number2,number3);
    cout<<result;

}
int findequal(int number1,int number2,int number3)
{
    if(number1==number2==number3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}