#include <iostream>
using namespace std;
void boardgame(int position1,int position2);
main()
{
	int position1,position2;
	cout<<"Enter your position : ";
	cin>>position1;
	cout<<"Enter your friend position : ";
	cin>>position2;
	boardgame(position1,position2);

}
void boardgame(int position1,int position2)
{
	position1=position1+6;
	if(position1>position2 or position1==position2)
	{
		cout<<"true";	
	}	
	if(position1<position2)
	{
		cout<<"false";
	}
}