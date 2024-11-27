#include<iostream>
#include<string>
using namespace std;
int findVolume(int size);
int boxes[100];
main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter length width height of ezh boxes one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>boxes[i];
    }
    int volume=findVolume(size);
    cout<<"VOlume of boxex : "<<volume;

}
int findVolume(int size)
{
    int product,sum;
    for(int i=0;i<size;i=i+3)
    {
            product=boxes[i]*boxes[i+1]*boxes[i+2];
            sum=sum+product;
    }
    return sum;
}







