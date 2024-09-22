#include <iostream>
using namespace std;
int main()
{

	int imposter_count;
	int player_count;
	float chance;
	cout<<"Enter the imposter count : ";
	cin>>imposter_count;
	cout<<"Enter the player count : ";
	cin>>player_count;
	chance=100*imposter_count/player_count;
	cout<<"Chance of being an imposter is : " <<chance << "%" ;

}