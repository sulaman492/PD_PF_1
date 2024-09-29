#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name();
main()
{
	system("cls");
	int x=55;
	int y=15;
	gotoxy(x,y);
	name();
	gotoxy(30,30);
}
void name()
{
	cout<<"Sulaman";

}
void gotoxy(int x, int y)
 {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
