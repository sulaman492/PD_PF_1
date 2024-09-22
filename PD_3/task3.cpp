#include <iostream>
using namespace std;
int main()
{
	int initial_velocity;
	int final_velocity;
	int acceleration;
	int time;
	cout<<"Enter initial velocity : ";
	cin>>initial_velocity;
	cout<<"Enter acceleration : ";
	cin>>acceleration;
	cout<<"Enter time : ";
	cin>>time;
	final_velocity=(acceleration*time)+initial_velocity;
	cout<<"final velocity : "<<final_velocity;
}