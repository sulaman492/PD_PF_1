#include<iostream>
#include<iterator>
using namespace std;
int findLargest(int );
int length;
main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int max=findLargest(n);
    cout<<"largest number is : "<<max;

}
int findLargest(int n)
{
    int arr[n];
    cout<<"enter "<<n <<" elements per line : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //cout<<endl;
    }
    int max=arr[0];
    for(int i = 0; i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            max=arr[i+1];
        }
        if(arr[i]>arr[i+1])
        {
            max=arr[i];
        }
    }
    return max;
}






