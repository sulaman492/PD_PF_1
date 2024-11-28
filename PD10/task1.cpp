#include<iostream>
using namespace std;
int array[100];

string findSequence(int size);
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the numbers of array one by one ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    string result=findSequence(size);
    if(result=="true")
    {
        for(int i=0;i<size;i++)
        {
            cout<<endl;
            cout<<array[i];
        }
    }
    if(result=="false")
    {
        cout<<"No";
    }

}
string findSequence(int size)
{
    string result="true";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[i]<array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<size-1;i++)
    {
        if(array[i+1]-array[i]!=1)
        {
            result="false";
        }
    }
    return result;
}