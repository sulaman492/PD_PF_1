#include<iostream>
using namespace std;
void findPosition(char word[5]);
main()
{
    char word[5];
    cout<<"enter the word : ";
    cin>>word;
    findPosition(word);

}

void findPosition(char word[5])
{
    for(int i=0;i<5;i++)
    {
        cout<<word[i]<<" is found at position : "<<i<<endl;
    }
}
