#include<iostream>
#include<string>
using namespace std;
void sortWeight();
int weight[10];
main()
{
    int size;
    cout<<"Enter the weigth of ten packages one by one : ";
    for(int i=0;i<10;i++)
    {
        cin>>weight[i];
    }
    sortWeight();
    cout<<"{";
    for(int i=0;i<10;i++)
    {
        cout<<weight[i]<<" , ";
    }
    cout<<"}";
}
void sortWeight()
{
    int w=0;
    for(int i=0;i<10;i++)                      
    {
        for(int j=0;j<10;j++)
        {
            if(weight[j]>weight[i])
            {
                int temp=weight[i];
                weight[i]=weight[j];
                weight[j]=temp;
            }
            
        }
    }
}
//23 24 25 22
//weight[i]=23       weight[j+w]=24         temp=23; weight[i]=24
//
//weight[i]=25       weight[j]=23