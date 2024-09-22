#include <iostream>
using namespace std;
int main()
{

	
	int square_meter;
	int width;
	int height;
	int walls;
	cout<<"Number of square meter you can paint : ";
	cin>>square_meter;
	cout<<"Width of single wall ( in meter ) : ";
	cin>>width;
	cout<<"Height of single wall ( in meter ) : ";
	cin>>height;
	walls=square_meter / ( width * height );
	cout<<"Number of walls you can paint is : "<<walls;

}




