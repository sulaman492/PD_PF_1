#include <iostream>
using namespace std;

float totalDigit(float);
main()
{
    float number,result;

    cout<<"enter the number  :";
    cin >> number;

    result = totalDigit(number);
    cout<<" The total digits of number "<<number<<" is :"<<result;


}
float totalDigit(float number)
{
    float n = 1;
    if(number > 10)
    {
        n = 1;
    }
    while(number >   10)
    {
        number = number / 10;
        n = n +1;
    }
    return n;
}