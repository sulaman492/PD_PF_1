#include <iostream>
using namespace std;
int main()
{

	
	
	int age;
	int times_move;
	int average;
	cout<<"Enter the persons age : ";
	cin>>age;
	cout<<"Enter the number of times they've moved : ";
	cin>>times_move;
	times_move=times_move + 1;
	average = age / times_move;
	cout<<"Average number of years lived in the same house : " << average;

}




