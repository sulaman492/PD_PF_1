#include <iostream>
#include <cmath>
using namespace std;
float calculate_height(float,float);
main()
{
    float base,angle;
    cout<<"Enter the from the base of tree : ";
    cin>>base;
    cout<<"Enter the angle in degrees : ";
    cin>>angle;
    angle=angle*0.0175;
    float height=calculate_height(base,angle);
    cout<<"The height of the tree is : "<<height;
}
float calculate_height(float base,float angle)
{
    float height=base*tan(angle);
    return height;
}