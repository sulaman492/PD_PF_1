#include<iostream>
using namespace std;
float totalincome(string movieType,int rows,int column);
main()
{

    string movieType;
    int rows,column;
    cout<<"Enter the movie type(premiere/normal/discount)  : ";
    cin>>movieType;
    cout<<"Enter the number of rows  : ";
    cin>>rows;
    cout<<"Enter the number of column  : ";
    cin>>column;
    float profit = totalincome(movieType,rows,column);
    cout<<profit;
}
float totalincome(string movieType,int rows,int column)
{
    if(movieType=="premiere")
    {
    
        float profit=rows*column*12;
        return profit;
    }
    if(movieType=="normal")
    {
    
        float profit=rows*column*7.5;
        return profit;
    }
    if(movieType=="discount")
    {
    
        float profit=rows*column*5;
        return profit;
    }
}