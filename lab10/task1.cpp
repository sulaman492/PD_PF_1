#include<iostream>
using namespace std;
int findProgressDays(int size);
int miles[100];
main()
{
    int size;
    cout<<"Enter the number of saturdays : ";
    cin>>size;
    cout<<"Enter the number of miles you run on each saturday one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>miles[i];
    }
    int progress=findProgressDays(size);
    cout<<"Number of progress days : "<<progress;
}
int findProgressDays(int size)
{
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        if(miles[i+1]>miles[i])
        {
            count++;
        }
    }
    return count;
}