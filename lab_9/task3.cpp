#include<iostream>
using namespace std;
void shiftedArray(char word[5]);
char word[5];
int ascii[5];
main()
{
    cout<<"enter the word : ";
    cin>>word;
    shiftedArray(word);
    cout<<"shifted array : ";
    for(int i=0;i<5;i++)
    {
        word[i]=1+ascii[i];
        cout<<word[i];
    }
}

void shiftedArray(char word[5])
{
    for(int i=0; i<5; i++)
    {
        ascii[i]=word[i];
    }
}