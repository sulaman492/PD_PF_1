#include<iostream>
#include<cmath>
using namespace std;
void findSpecial(int n);
string array[100];
string array2[100];
main()
{
    int n;
    cout<<"Enter the size of string  : ";
    cin>>n;
    cout<<"Enter the string : ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    findSpecial(n);
    for(int i=0;i<n;i++)
    {
       cout<<array[i]<<" ";
    }    
}
void findSpecial(int  n)
{
        array[0]="something " + array[0];
}
