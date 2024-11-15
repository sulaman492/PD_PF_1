#include<iostream>
using namespace std;
string array[11]={" ","Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
int array2[4];
int findMoves(int number);
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>9999)
    {
        cout<<"invalid input :";
        return 0;
    }
    findMoves(number);
    int j=1;
    int p;
    cout<<"{";
    for(int i=0;i<4;i++)
    {
        p=array2[i]+j;
        if(p>10)
        {
            p=p-10;
        }
        cout<<array[p]<<" , ";
        j++;
    }
    cout<<"}";

}
int findMoves(int number)
{
    int first=number;
    int last=0;
    int length=0;
    while(length<4)
    {
        last=first%10;
        first=first/10;
        array2[length]=last;
        length=length+1;
    }
    int temp=array2[0];
    array2[0]=array2[3];
    array2[3]=temp;
    temp=array2[1];
    array2[1]=array2[2];
    array2[2]=temp;


}