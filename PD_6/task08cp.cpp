#include <iostream>
using namespace std;
//Header
int calculateVolleyballGames(string, int, int);
main()
{
    //Declaration
    string yearType;
    int holidays,hometownWeekends,result;
    //Input
    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends in hometown: ";
    cin>>hometownWeekends;
    //Output
    result=calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    //Declaration
    int conclusion;
    float notWorking,totalGamesinSofia,playableHolidays,totalTimeforgame;
    notWorking=(48*(3.0/4.0));              //Not working days
    playableHolidays=(2.0/3.0)*holidays;    //Playable holidays
    totalGamesinSofia=(notWorking+playableHolidays)-hometownWeekends;   //Games in sophia
    if(yearType=="normal")
    {
        totalTimeforgame=hometownWeekends+totalGamesinSofia;        //Total games
        conclusion=totalTimeforgame;            
    }
    if (yearType=="leap")
    {
        totalTimeforgame=hometownWeekends+totalGamesinSofia;    //Total games in leap
        conclusion=totalTimeforgame+0.15*totalTimeforgame;
    }
    else
    {
        cout<<"Invalid input";
    }
    return conclusion;
}