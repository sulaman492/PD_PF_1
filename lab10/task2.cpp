#include<iostream>
using namespace std;
int findCount(char letter,int size);
string word[100];
main()
{
    int size;
    char letter;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter "<<size<<" words one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>word[i];
    }
    cout<<"Enter the letter you want to find : ";
    cin>>letter;
    int count=findCount(letter,size);
    cout<<"The letter "<<letter <<" shows up "<<count<<" times in the data ";

}
int findCount(char letter,int size)
{
    string w;
    int count=0,j=0;
    for(int i=0;i<size;i++)
    {
        w=word[i];
        while(w[j]!='\0')
        {
            if(w[j]==letter)
            {
                count++;
                j++;
            }
            if(w[j]!=letter)
            {
                j++;
            }
        }
    }    
    return count;
}
