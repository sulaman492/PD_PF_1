#include<iostream>
using namespace std;
string array[100];

int findTimeToColor(int size);
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the "<<size<<" elements one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int time=findTimeToColor(size);
    cout<<"It will take "<<time<<" seconds to paint";
}
int findTimeToColor(int size)
{
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        if(array[i]!=array[i+1])
        {
            count=count+1;
        }
    }
    int time=(size*2)+count;
    return time;
}