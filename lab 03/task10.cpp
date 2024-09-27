#include <iostream>
using namespace std;
int main()
{
	int win;
	int lose;
	int draw;
	int total;
	cout<<"enter the number of wins : ";
	cin>>win;
	cout<<"enter the number of draws : ";
	cin>>draw;
	cout<<"enter the number of losses : ";
	cin>>lose;
	total=(win*3) + (draw*1);
	cout<<"pakistan team has total"<<total;
}