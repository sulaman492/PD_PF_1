#include<iostream>
#include<string>
using namespace std;
string findStatus(int hour1,int minute1,int hour2,int minute2);

main()
{
    int hour1,minute1;
    int hour2,minute2;
    cout<<"Enter exam starting time (in hours) : ";
    cin>>hour1;
    cout<<"Enter exam starting time(in minutes) :";
    cin>>minute1;
    cout<<"Enter the time of arrival (in hours) : ";
    cin>>hour2;
    cout<<"Enter the time of arrival (in minutes) : ";
    cin>>minute2;
    string result=findStatus(hour1,minute1,hour2,minute2);
    if(result=="Early")
    {
        int f;
        f=(hour1*60)+minute1;
        f=f-((hour2*60)+minute2);
        if(f>60)
        {
            int remainder,quotient;
            quotient=f/60;
            remainder=f%60;
            cout<<result<<endl;
            cout<<quotient<<" : "<<remainder<<" before the start of exam";
        }
        else
        cout<<result<<endl<<"0 : "<<f<<" before the start of exam ";    
    }
    if(result=="late")
    {
        int f;
        f=(hour2*60)+minute2;
        f=f-((hour1*60)+minute1);
        if(f>60)
        {
            int quotient,remainder;
            quotient=f/60;
            remainder=f%60;
            cout<<result<<endl;
            cout<<quotient<<" : "<<remainder<<" After the start of exam";
        }
        else
        cout<<result<<endl<<"0 : "<<f<<" after the start of exam";
    }
    if(result=="on time")
    {
        cout<<result;
    }

}
string findStatus(int hour1,int minute1,int hour2,int minute2)
{
    int convert1,convert2;
    convert1=hour1*60;
    convert1=convert1+minute1;
    convert2=hour2*60;
    convert2=convert2+minute2;
    int result=convert1-convert2;
    if(result==0)
    {
        return "on time";
    }
    if(result>0)
    {
        return "Early";
    }
    if(result<0)
    {
        return "late";
    }
    
}