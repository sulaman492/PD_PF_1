#include<iostream>
#include<cmath>
using namespace std;

void findSpecial(int n);
char array[100];
char array2[100];
main()
{
    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    cout<<"Enter the string ; ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    findSpecial(n);
    cout<<"array with no vowel :" ;
    for(int i=0;i<n;i++)
    {
        cout<<array2[i];
    }
}
void findSpecial(int n)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]!='a' && array[i]!='e'&& array[i]!='i'&& array[i]!='o'&& array[i]!='u')
        {
            array2[i]=array[i];
        }
    }
}