#include<iostream>
#include<string>
using namespace std;
string array[100];
string reverseString[100];
void reverseTheString(int );
main()
{
    int size;
    cout<<"Enter the size of string : ";
    cin>>size;
    cout<<"Enter the words of string one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    reverseTheString(size);
    cout<<"Reverse string : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<reverseString[i]<<endl;
    }
}
void reverseTheString(int size)
{
    int j=0;
    for(int i=size-1;i>=0;i++)
    {
        reverseString[j]=array[i];
        j++;   
    }    
}