#include <iostream>
using namespace std;

int frequencyChecker(int, int);
main()
{
    int number, digit, result;

    cout<<" Enterr the number  :";
    cin >> number;

    cout<<" Enter the digit to check  :";
    cin >> digit;

    result = frequencyChecker(number, digit);
    cout <<"The frequency of the digit is  :"<<result;
}
int frequencyChecker(int number, int digit)
{
    int frequency=0;
    
    for(int x = 0; x < number;x = x+1)
    {
        int lastDigit = number % 10;
         if(lastDigit == digit)
        {
            frequency = frequency + 1;
        }
        number = number / 10;
       
    }
    return frequency;
}                                   