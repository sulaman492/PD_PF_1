#include <iostream>
using namespace std;

int digitSum(int);

main()
{
    int number, result;

    cout<<"enter the number :";
    cin >> number;

    result = digitSum(number);
    cout<< "the sum of digit is  :"<<result;

}
int digitSum(int number)
{
    int sum = 0;

    for(int x=0;x < number ; x = x+1)
    {
        int lastDigit = number % 10;

        sum = sum + lastDigit;

        number = number / 10;
    }
    return sum;
}