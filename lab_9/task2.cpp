#include<iostream>
using namespace std;
void reveseString();
char word[5];
char word2[5];
main()
{
    cout<<"enter the word : ";
    cin>>word;
    reveseString();
    for(int i=0;i<5;i++)
    {
        cout<<word2[i];
    }
    
}

void reveseString()
{
    cout<<"reverse string is : ";
    int j=0;
    for(int i=4;i>=0;i--)
    {
        word2[j]=word[i];
        j++;
    }
}