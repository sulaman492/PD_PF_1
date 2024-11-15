#include<iostream>
using namespace std;
int array[100];

void evenOddTransform(int size,int time);
main()
{
    int size,time;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the number of times you wnat to do even odd transform  : ";
    cin>>time;
    cout<<"Enter the "<<size<<" elements one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    evenOddTransform(size,time);
    cout<<"{";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" , ";
    }
    cout<<"}";
}

void evenOddTransform(int size,int time)
{
    for(int i=0;i<time;i++)
    {
        for(int i=0;i<size;i++)
        {
           if(array[i]%2==0)
           {
            array[i]=array[i]-2;
           }
           if(array[i]%2!=0)
           {
            array[i]=array[i]+2;
           }
        }
    }    
}