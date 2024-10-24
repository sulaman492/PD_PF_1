#include <iostream>
using namespace std;

int calculateGCD(int,int);
int calculateLCM(int,int,int);
main() 
{
    int number1, number2;
    int result, conclusion;

    
    cout << "Enter first positive integers: ";
    cin >> number1 ;
     cout << "Enter second positive integers: ";
    cin >> number2 ;
    

    
    result = calculateGCD(number1, number2);
    cout << "GCD of " << number1 << " and " << number2 << " is: " << result << endl;
    
    conclusion = calculateLCM(number1, number2, result);
    cout << "LCM of " << number1 << " and " << number2 << " is: " << conclusion << endl;

    return 0;
}
int calculateGCD(int a, int b) {
    while (b != 0) 
    {
        int gcd = b;
        b = a % b;
        a = gcd;
    }
    return a;
}


int calculateLCM(int a, int b, int result) 
{
    int lcm;
    lcm=(a * b) / result;
    return lcm;
}

