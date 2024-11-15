#include<iostream>
#include<cmath>
using namespace std;

string findSpecial(int n);
int array[100];
main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"enter the values : ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    string result=findSpecial(n);
    cout<<result;
}

string findSpecial(int n)
{
    
    int count=0;
    for(int i=0;i<n;i=i+2)
    {
        if(array[i] % 2 ==0)
        {
            count++;
        }
    }
    for(int i=1;i<n;i=i+2)
    {
        if(array[i] % 2!=0)
        {
            count++;
        }
    }
    if(count==n)
    {
        return "TRUE";
    }
    if(count!=n)
    {
        return "FALSE";
    }
}