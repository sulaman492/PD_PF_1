#include<iostream>
#include<string>
using namespace std;
string findZodiacSign(int day , string month);

main()
{
    int day;
    string month;
    cout<<"Enter the day of birth : ";
    cin>>day;
    cout<<"Enter the month of birth : ";
    cin>>month;
    string result = findZodiacSign(day,month);
    if(result!="invalid day or month")
    {
        cout<<"Zodiac Sign : "<<result;
    }
    if(result=="invalid day or month")
    {
        cout<<result;
    }
    


}
string findZodiacSign(int day , string month)
{
    if(day<32 && (month=="january" || month=="february" || month=="march" || month=="april" || month=="may" || month=="june" || month=="july" || month=="august"||month=="september"||month=="october" || month=="november" || month=="december"))
        {
        if(day>20 && month=="january")
        {
            return "Aquarius";
        }
        if(day<=18 && month=="february")
        {
            return "Aquarius";
        }
        if (day>=19 && month=="february")
        {
            return "Pisces";
        }
        if(day<=20 && month=="march")
        {
            return "Pisces";
        }
        if(day>=21 && month=="march")
        {
            return "Aries";
        }
        if(day<=19 && month=="april")
        {
            return "Aries";
        }
        if(day>=20 && month=="april")
        {
            return "Taurus";
        }
        if(day<=20 && month=="may")
        {
            return "Taurus";
        }
        if(day>=21 && month=="may")
        {
            return "Gemini";
        }
        if(day<=20 && month=="june")
        {
            return "Gemini";
        }
        if(day>=21 && month=="june")
        {
            return "Cancer";
        }
        if(day<=22 && month=="july")
        {
            return "Cancer";
        }
        if(day>=23 && month=="july")
        {
            return "Leo";
        }
        if(day<=22 && month=="August")
        {
            return "leo";
        }
        if(day>=23 && month=="august")
        {
            return "Virgo";
        }
        if(day<=22 && month=="september")
        {
            return "Virgo";
        }
        if(day>=23 && month=="september")
        {
            return "Libra";
        }
        if(day<=22 && month=="october")
        {
            return "Libra";
        }
        if(day>=23 && month=="october")
        {
            return "Scorpio";
        }
        if(day<=21 && month=="november")
        {
             return "Scorpio";
        }   
        if(day>=22 && month=="november")
        {
            return "Sagittarius";
        }
        if(day<=21 && month=="december")
        {
            return "Sagittarius";
        }
        if(day>=22 && month=="december")
        {
            return "Capricon";
        }
        if(day<=19 && month=="january")
        {
            return "Capricon";
        }
    }
    else
    {
        return "invalid day or month";
    }


    
}