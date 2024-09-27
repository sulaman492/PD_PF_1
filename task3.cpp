#include <iostream>
using namespace std;
void howmanysticker (int);
main()
{
	int length;
	cout<<"Enter the side length of rubiks cube : ";
	cin>>length;
	howmanysticker(length);
}
void howmanysticker(int length)
{
	int sticker = (length * length) *6;
	cout<<"number of stickers needed : "<<sticker; 
	
}