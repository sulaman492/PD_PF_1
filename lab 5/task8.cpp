#include <iostream>
#include <cmath>
using namespace std;
int check_number(int number);
main()
{
    int number;
    cout<<"Enter a five digit number : ";
    cin>>number;
    int result = check_number(number);
    if(result%2==0)
    {
        cout<<"Evenish";
    }
    if(result%2!=0)
    {
        cout<<"Oddish";
    }
}
int check_number(int number)
{
    int n1=number/10000;
    int n2=(number/10000)%1000;
    int n3=(number/1000)%100;
    int n4=(number/100)%10;
    int n5=(number%10);
    return(n1+n2+n3+n4+n5);
}