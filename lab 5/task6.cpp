#include <iostream>
#include <cmath>
using namespace std;
char check_alphabet(char alphabet);
main()
{
    char alphabet;
    cout<<"Enter a charecter (A/a) : ";
    cin>>alphabet;
    check_alphabet(alphabet);

}
char check_alphabet(char alphabet)
{
    if(alphabet=='A')
    {
        cout<<"You have entered a capital : "<<alphabet;
    }
    if(alphabet=='a')
    {
        cout<<"You have entered a small  : "<<alphabet;
    }
    return alphabet;
}