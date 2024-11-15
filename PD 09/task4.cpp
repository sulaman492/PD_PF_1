#include<iostream>
using namespace std;
string printBoom(int number);
int array[100];
main()
{
    int number;
    cout<<"Enter the size of array : ";
    cin>>number;
    cout<<"Enter the "<<number<<" elements one by one : ";
    for(int i=0;i<number;i++)
    {
        cin>>array[i];
    }
    string result=printBoom(number);
    cout<<result;
}
string printBoom(int number)
{
    int last;
    int first;
    int count;
    for(int i=0;i<number;i++)
    {
        first=array[i];
        last=first%10;
        first=first/10;
        if(last==7)
        {
            return "Boom";
        }                 
    }   
}