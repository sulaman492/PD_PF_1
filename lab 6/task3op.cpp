#include<iostream>
using namespace std;
float calculatePerimeter(string shape,float value);
main()
{
    string shape;
    float value;
    cout<<"Enter the shape(c for circle , t for triangle, s for square , h for hexagon) : ";
    cin>>shape;
    cout<<"Enter the value : ";
    cin>>value;
    float result= calculatePerimeter(shape,value);
    cout<<"the perimeter is : "<<result;

}
float calculatePerimeter(string shape,float value)
{
    if(shape=="c")
    {
        value=value*6.28;
        return value;
    }
     if(shape=="s")
    {
        value=value*4;
        return value;
    }
     if(shape=="h")
    {
        value=value*6;
        return value;
    }
     if(shape=="t")
    {
        value=value*3;
        return value;
    }
}