#include<iostream>
using namespace std;
int findGreater(int size);
int number[100];
int greaterNumber[100];
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the "<<size<<" number one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int result=findGreater(size);
    if(result>0)
    {
        cout<<"{";
        for(int i=0;i<result;i++)
        {
            cout<<greaterNumber[i]<<" , ";
        }
        cout<<"}";
    }
    else
        cout<<"Peak no found";
}
int findGreater(int size)
{
    int j=0;
    for(int i=1;i<size-1;i++)
    {
        if(number[i]>number[i+1] && number[i]>number[i-1])
        {
            greaterNumber[j]=number[i];
            j++;
        }
    }
    return j;
}