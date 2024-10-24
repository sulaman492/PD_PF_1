#include <iostream>
using namespace std;
//Header
void printDiamond(int);
main()
{
    //Declaration
    int rowsize;
    //Input
    cout<<"Enter row size: ";
    cin>>rowsize;
    //Calling of function
    printDiamond(rowsize);
}
void printDiamond(int rowsize)
{
    for(int row=rowsize;row>0;row=row-1)
    {
        for(int col=row; col>0;col=col-1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}