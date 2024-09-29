#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name();
void n1();
void n2();
void n3();
void n4();
main()
{
	system("cls");
	gotoxy(5,5);
	n1();
	gotoxy(5,6);
	n2();	
	gotoxy(5,7);
	n3();
	gotoxy(5,8);
	n3();
	gotoxy(5,9);
	n2();
	gotoxy(5,10);
	n4();
	gotoxy(15,15);
	
}
void n1()
{
	cout<<"H";

}
void n2()
{
	cout<<"A";
}

void n3()
{
	cout<<"S";
}

void n4()
{
	cout<<"N";
}





void gotoxy(int x, int y)
 {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
