#include<iostream>
using namespace std;
int  insertArray(int n, int arr[], int arrOfSize2[]);
main()
{
    int n;
    int arrOfSize2[2];
    cout<<"Enter the number of elements in first array (must be 2 ): ";
    cin>>n;
    for(int i=0;i<n;i++)
    {    
        cin>>arrOfSize2[i];   
    }
    cout<<"Enter the number of elements in second array : ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements for second array one by one : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertArray(n,arr,arrOfSize2);


}

int  insertArray(int n, int arr[], int arrOfSize2[])
{

    int size=n+2;
    int j=0;
    int finalArray[size];
    finalArray[0]=arrOfSize2[0];
    for(int i=1;i<size-1;i++)
    {
        finalArray[i]=arr[j];
        j++;
    }
    finalArray[size-1]=arrOfSize2[1];
    cout<<"{";
    for(int i=0;i<size;i++)
    {
        cout<<finalArray[i]<<" , ";
    }
    cout<<"}";

}