#include <iostream>
using namespace std;
//Header
void printupperDiamond(int);
void printlowerDiamond(int);
main()
{
    //Declaration
    int rowsize;
    //Input
    cout<<"Enter row size: ";
    cin>>rowsize;
    //Calling of function
    printupperDiamond(rowsize);
    printlowerDiamond(rowsize);
}
void printupperDiamond(int rowsize)
{
 for(int row=1;row<=rowsize;row++)
 {
    for (int space=rowsize;space>=row;space--)
    {
        cout<<" ";
    }
    for (int column=1;column<=row;column++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}
void printlowerDiamond(int rowsize)
{
for(int row=1;row<=rowsize;row++)
 {
    for (int space=1;space<=row;space++)
    {
        cout<<" ";
    }
    for (int column=rowsize;column>=row;column--)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}