#include <iostream>
using namespace std;
float min(float,float);
main()
   {
        float number1,number2;
        cout<<"Enter first number : ";
        cin>>number1;
        cout<<"Enter second number : ";
        cin>>number2;
        float minimum = min(number1,number2);
        if(minimum>0)
        {
             cout<<"the minimum of "<<number1<<" and "<<number2<<" is : "<<number1;   
        }
        if(minimum<0)
        {
             cout<<"the minimum of "<<number1<<" and "<<number2<<" is : "<<number2;   
        }
    
    }
float min(float number1,float number2)
{
    float minimum=number1-number2;
    return minimum;
}

