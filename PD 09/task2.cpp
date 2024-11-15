#include<iostream>
using namespace std;
float calculatePrice(string name);
string movie[5]={"gladiator","starwars","terminator","takingLives","tombrider"};
main()
{
    string name;
    cout<<"Enter the name of movie : ";
    cin>>name;
    float price = calculatePrice(name);
    cout<<"The total amount of movie is : "<<price;
}
float calculatePrice(string name)
{
    int  idx=-1;
    float price=0;
    for(int i=0;i<5;i++)
    {
        if(movie[i]==name)
        {
            idx=i;
            break;
        }
    }
    if(idx%2==0)
    {
         price=500-(500*0.1);
         return price;
    }
    if(idx%2!=0)
    {
         price=500-(500*0.05);
         return price;
    }
}
