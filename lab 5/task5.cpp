#include <iostream>
#include <cmath>
using namespace std;
float discriminant(float a,float b,float c);
main()
{
    float a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    float result=discriminant(a,b,c);
    if(result>0)
    {
        float root1=(-b+sqrt(result))/2*a;
        float root2=(-b-sqrt(result))/2*a;
        cout<<"Solution :  x = "<<root1<<" x = "<<root2;
    }
    if(result==0)
    {
        float root1=-b/2*a;
        cout<<"Solution : x = "<<root1;
    }
    if(result<0)
    {
        float root1;//=(-b/2a)+(sqrt(-(result)/2*a));
        float root2;//=(-b/2a)-(sqrt(-(result)/2*a));
        cout<<"Solution : x = "<<(-b/2*a)<<"+i"<<(sqrt(-(result)/2*a))<<" x = "<<(-b/2*a)<<"-i"<<(sqrt(-(result)/2*a));
    }
    
}
float discriminant(float a,float b,float c)
{
    float result=(b*b-4*a*c);
    return result;
}