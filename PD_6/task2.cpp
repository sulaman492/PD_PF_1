#include<iostream>
#include<string>
using namespace std;
float calculateAverage(float english,float math,float chemistry,float socialScience,float biology);
string calculateGrade(float);

main()
{
    float english,math,chemistry,socialScience,biology;
    string name;
    cout<<"Enter student name : ";
    cin>>name;
    cout<<"Enter marks for English : ";
    cin>>english;
    cout<<"Enter marks for Math : ";
    cin>>math;
    cout<<"Enter marks for Chemistry : ";
    cin>>chemistry;
    cout<<"Enter marks for social science : ";
    cin>>socialScience;
    cout<<"Enter marks for biology : ";
    cin>>biology;
    float average = calculateAverage(english,math,chemistry,socialScience,biology);
    string grade = calculateGrade(average);
    cout<<"Student Name : "<<name<<endl;
    cout<<"percentage : "<<average<<"%"<<endl;
    cout<<"Grade : "<<grade<<endl;

}
float calculateAverage(float english,float math,float chemistry,float socialScience,float biology)
{
    float average=(english+math+socialScience+biology+chemistry)*100;
    average=average/500;
    return average;

}
string calculateGrade(float grade)
{
    if(grade>=90 && (grade<100.00||grade==100.00))
    {
        return "A+";
    }
    if(grade>=80 && grade<90)
    {
        return "A";
    }
    if(grade>=70 && grade<80)
    {
        return "B+";
    }
    if(grade>=60 && grade<70)
    {
        return "B";
    }
    if(grade>=50 && grade<60)
    {
        return "C";
    }
    if(grade>=40 && grade<50)
    {
        return "D";
    }
    if(grade<40)
    {
        return "F";
    }

}
