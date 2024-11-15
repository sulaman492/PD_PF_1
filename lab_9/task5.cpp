#include<iostream>
using namespace std;

main()
{
    int size;
    cout<<"How many number youwant to enter : ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }


}