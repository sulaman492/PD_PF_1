#include<iostream>
#include<string>
using namespace std;
string number[100];
bool findRepeatinCycle(int cycle,int size);
main()
{
    int size;
    int cycle;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the "<<size<<" numbers one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Enter the repeating cycle of array : ";
    cin>>cycle;
    bool result=findRepeatinCycle(cycle,size);
    cout<<result;
}
bool findRepeatinCycle(int cycle,int size)
{
    bool result=true;
    for(int i=0;i<size;i++)
    {
        if(i+cycle<size)
        {
            if(number[i]==number[i+cycle])
            {
                result=true;
            }
            if(number[i]!=number[i+cycle])
            {
                result=false;
            }
        }    
    }
    return result;
}