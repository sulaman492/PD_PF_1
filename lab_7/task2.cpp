#include <iostream>
using namespace std;

void generateFibonicc(int);

main()
{
    int length;

    cout<<"enter the length of fibonicc series  :";
    cin>> length;

    generateFibonicc(length);

}
void generateFibonicc(int length)
{
    int num1= 0;
    int num2 =1;
    int next;
    for(int x=1; x < length;x = x + 1)
    {
        next = num1 + num2;
        cout<<next<<" , ";

        num1 = num2;
        num2 = next;
    }

}