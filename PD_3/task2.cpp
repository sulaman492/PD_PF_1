#include <iostream>
using namespace std;
int main()
{

	
	int minute;
	int frames_per_second;
	int total_frames;
	cout<<"Number of minutes : ";
	cin>>minute;
	cout<<"Frames per seconds : ";
	cin>>frames_per_second;
	minute=minute*60;
	total_frames=minute*frames_per_second;
	cout<<"Total frames per second : "<<total_frames;
	
}




