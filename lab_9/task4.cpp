#include<iostream>
using namespace std;
void reverseArray(int);
int array[100];
int array2[100];
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the elements one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    reverseArray(size);
    cout<<"{ ";
    for(int i=0;i<size;i++)
    {
        cout<<array2[i]<<" , ";
    }
    cout<<"}";
}
void reverseArray(int size)
{
    int j=size-1;
    for(int i=0;i<size;i++)
    {
        array2[j]=array[i];
        j--;
    }
}