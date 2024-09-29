#include <iostream>
using namespace std;
void checkspeed(int speed);
main()
{
	int speed;
	cout<<"Speed : ";
	cin>>speed;
	checkspeed(speed);
}
void checkspeed(int speed)
{
	if (speed>100)
	{
		cout<<"Halt.....You will be challenged";
	}
	if(speed<100)
	{
		cout<<"perfect! you're going good ";
	}



}