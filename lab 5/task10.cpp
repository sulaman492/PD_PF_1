#include <iostream>
#include <cmath>
using namespace std;
string convert_number(int number);
string convert(int number);
main()
{
    int number;
    cout<<"Enter a number in range (1-99) : ";
    cin>>number;
    if(number<21)
    {
        string result=convert(number);
        cout<<result;
    }
    if(number>20)
    {
       string result=convert_number(number);
        cout<<result;
    }
}
string convert_number(int number)
{
    int first=number/10;
    int second=number%10;
    string n1,n2;
    if(first==2)
    {
        n1="twenty";
    }
    if(first==3)
    {
        n1="thirty";
    }
    if(first==4)
    {
        n1="fourty";
    }
    if(first==5)
    {
        n1="fifty";
    }
    if(first==6)
    {
        n1="sixty";
    }
    if(first==7)
    {
        n1="seventy";
    }
    if(first==8)
    {
        n1="eighty";
    }
    if(first==9)
    {
        n1="ninety";
    }
    if(second==0)
    {
        n2=" ";
        return n1+n2;
    }
    if(second==1)
    {
        n2="one";
        return n1+n2;
    }
    if(second==2)
    {
        n2="two";
        return n1+n2;

    }
    if(second==3)
    {
        n2="three";
        return n1+n2;
    }
    if(second==4)
    {
        n2="four";
        return n1+n2;

    }
    if(second==5)
    {
        n2="five";
        return n1+n2;
    }
    if(second==6)
    {
        n2="six";
        return n1+n2;
    }
    if(second==7)
    {
        n2="seven";
        return n1+n2;
    }
    if(second==8)
    {
        n2="eight";
        return n1+n2;
    }
    if(second==9)
    {
        n2="nine";
        return n1+n2;
    }
}
string convert(int number)
{

    if (number == 1) {
        return "one";
    }
    if (number == 2) {
        return "two";
    }
    if (number == 3) {
        return "three";
    }
    if (number == 4) {
        return "four";
    }
    if (number == 5) {
        return "five";
    }
    if (number == 6) {
        return "six";
    }
    if (number == 7) {
        return "seven";
    }
    if (number == 8) {
        return "eight";
    }
    if (number == 9) {
        return "nine";
    }
    if (number == 10) {
        return "ten";
    }
    if (number == 11) {
        return "eleven";
    }
    if (number == 12) {
        return "twelve";
    }
    if (number == 13) {
        return "thirteen";
    }
    if (number == 14) {
        return "fourteen";
    }
    if (number == 15) {
        return "fifteen";
    }
    if (number == 16) {
        return "sixteen";
    }
    if (number == 17) {
        return "seventeen";
    }
    if (number == 18) {
        return "eighteen";
    }
    if (number == 19) {
        return "nineteen";
    }
    if (number == 20) {
        return "twenty";
    }
}
