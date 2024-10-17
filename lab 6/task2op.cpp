#include<iostream>
using namespace std;
int checknumber(int number);
main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int result = checknumber(number);
    cout<<result;

}
int checknumber(int number)
{
    int first=number/100;  
    int second=(number%100)/10;
    int third=number%10;
    int sum=first+second+third;
    if(number%2==0 && sum%2==0)
    {  
        return 1;
    }
    if(number%2!=0 && sum%2!=0)
    {  
        return 1;
    }
    else
    return 0;
}