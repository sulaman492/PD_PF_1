#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void moveplayer(int x,int y);
main()
{
	int x=3;
	int y=1;
	system("cls");
	printmaze();
	while(true)
	{
		moveplayer(x,y);
	}
}
void moveplayer(int x,int y)
{
	
	while(y<10)
	{	
		
		gotoxy(x, y);
		cout<<"P";		
		Sleep(200);
		gotoxy(x,y);
		cout<<" ";
		y=y+1;	
	}
	if(y==10)
		{
			while(y>2)
			{
				gotoxy(x,y);
				cout<<"P";
				Sleep(200);
				gotoxy(x,y);
				cout<<" ";
				y=y-1;
				
			}
		}
	gotoxy(20,20);

}

void printmaze()
{
	cout<<"##########################"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"#                        #"<<endl;
	cout<<"##########################"<<endl;
}
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}