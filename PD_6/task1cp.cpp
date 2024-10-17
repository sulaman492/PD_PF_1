#include<iostream>
#include<string>
using namespace std;
string decideactivity(string , string);
main()
{
    string temperature;
    string humidity;
    cout<<"Enter the temperature (cold or wwarm): ";
    cin>>temperature;
    cout<<"Enter the humidity (dry or humid) : ";
    cin>>humidity;
    string activity = decideactivity(temperature,humidity);
    cout<<activity;

}
string decideactivity(string temperature,string humidity)
{
    if(temperature == "warm" && humidity == "dry")
    {
        return "play tennis";
    }
    if(temperature == "warm" && humidity == "humid")
    {
        return "swim";
    }
    if(temperature == "cold" && humidity == "dry")
    {
        return "play baskeball";
    }
    if(temperature == "cold" && humidity == "humid")
    {
        return "watch TV";
    }
}