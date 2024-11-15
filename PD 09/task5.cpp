#include<iostream>
using namespace std;
char array[4];

bool findIdentical();
main()
{
    cout<<"Enter the four elements : ";
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    bool result=findIdentical();
    cout<<result;
}
bool findIdentical()
{
    bool result=true;
    for(int i=0;i<3;i++)
    {
        if(array[i]!=array[i+1])
        {
            result=false;
        }
    }
    return result;
}