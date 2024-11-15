#include<iostream>
using namespace std;

void jazzify(int);
string array[100];
main()
{
    int n;
    cout<<"Enter the number of chords : ";
    cin>>n;
    cout<<"Enter the values : ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    jazzify(n);
     cout<<"{";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ,";
    }
    cout<<"}";
}

void jazzify(int n)
{
    string a="7";
    int idx=0;
    for(int i=0;i<n;i++)
    {
        array[i]=array[i]+a;
    }
    
}