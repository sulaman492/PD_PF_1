#include<iostream>
#include<iterator>
using namespace std;
float findResistance(int n);
main()
{
    int n;
    cout<<"Enter the number of resistors in series : ";
    cin>>n;
    float resistance=findResistance(n);
    cout<<"The total resistance of circiut is : "<<resistance<<" ohms";
}

float findResistance(int n)
{
    float resistance=0.000000;
    float arr[n];
    cout<<"enter "<<n<<" elements one by one : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        resistance=resistance+arr[i];
    }
    return resistance;

}
