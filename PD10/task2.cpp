#include<iostream>
using namespace std;
string array[100];

int findRotation(int size);
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the directions one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int angle=findRotation(size);
    cout<<"Total number of rotations : "<<angle;
}
int findRotation(int size)
{
    int angle=0,sum=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]=="right"||array[i]=="Right"||array[i]=="RIGHT")
        {
            sum=sum+1;
            if(sum==4||sum==-4)
            {
                angle=angle+1;
                sum=0;
            }
        }
        if(array[i]=="left"||array[i]=="Left"||array[i]=="LEFT")
        {
            sum=sum-1;
            if(sum==4||sum==-4)
            {
                angle=angle+1;
                sum=0;
            }
        }
    }
    return angle;
}