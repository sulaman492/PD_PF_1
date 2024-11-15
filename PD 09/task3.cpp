#include<iostream>
using namespace std;
bool findLength(string word);
int n;
main()
{
    string word;
    cout<<"Enter the string : ";
    cin>>word;
    bool result=findLength(word);
    cout<<result;    

}
bool findLength(string word)
{
    int count=0;
    int idx=0;
    while (word[idx]!='\0')
    {
        count++;
        idx++;
    }
    if(count%2==0)
    {
        return true;
    }
    if(count%2!=0)
    {
        return false;
    }
}