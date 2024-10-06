#include <iostream>
#include <cmath>
using namespace std;
float calculate_squareroot(float);
main()
{
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    float square_root=calculate_squareroot(number);
    cout<<"square root of "<<number <<" is : "<<square_root;


}
float calculate_squareroot(float number)
{
    float square_root=sqrt(number);
    return square_root;
}