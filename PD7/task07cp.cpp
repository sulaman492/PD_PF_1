#include <iostream>
#include <cmath>
using namespace std;
//Header
void patientforDays(int);
main()
{
    //Declaration
    int days;
    //Input
    cout<<"Number of days you visted hospital: ";
    cin>>days;
    //Calling of function
    patientforDays(days);
}
void patientforDays(int days)
{
    //Declaration
    int patientvisting=0,treatedpatients=0;
    int untreatedpatients=0,doctors=7,totaltreatedpatients=0;
    int totalUNtreatedpatients=0;
    for(int x=1; x<=days ;x++)
    {
        cout<<"Patients who visted hospital on Day "<<x<<": ";
        cin>>patientvisting;
        if (patientvisting>doctors)//Untreated patients on x day
        {        
            untreatedpatients=patientvisting-doctors;
        }
        else
        {
            untreatedpatients=0;
        }
        treatedpatients=min(patientvisting,doctors);//treated patients on x day
        totalUNtreatedpatients=totalUNtreatedpatients+untreatedpatients;//total untreated patients
        totaltreatedpatients=totaltreatedpatients+treatedpatients;//total treated patients
        if(totalUNtreatedpatients>totaltreatedpatients)//addition of doctors in case
        {
            doctors=doctors+1;
        }
    }
    cout<<"Total treated patients: "<<totaltreatedpatients<<endl;
    cout<<"Total untreated patients: "<<totalUNtreatedpatients<<endl;
}