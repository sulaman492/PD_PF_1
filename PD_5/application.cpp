#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void printHeader();
void printBody();
void gotoxy(int,int);
int printMenu();
void deleteMenu();
int checkPassword(int number);
int deletepassword();

int x=4,y=7;
int main()
{   
    int number,result,answer;
    system("cls");
    printHeader();
    printBody();
    number = printMenu();
    deleteMenu();
    answer = checkPassword(number);
    Sleep(500);
    //result = deletepassword();
    gotoxy(24,24);
   
}
void printHeader()
{
    cout<<"*************************************************************************************************"<<endl;
    cout<<"*                                   SCHOOL MANAGEMENT SYSTEM                                    *"<<endl;;
    cout<<"*************************************************************************************************"<<endl;
    cout<<endl;
    cout<<endl;
}
void printBody()
{
    cout<<"*********************************************************************"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"**                                                                 **"<<endl;
    cout<<"*********************************************************************"<<endl;
    
}
int printMenu()
{
   
    int number;
    gotoxy(x, y);
    cout<<"1.Student"<<endl;
    Sleep(150);
    gotoxy(x, y+1);
    cout<<"2.Teacher"<<endl;
    Sleep(150);
    gotoxy(x, y+2);
    cout<<"3.Administrator"<<endl;
    Sleep(150);
    gotoxy(x, y+3);
    cout<<"4.Exit"<<endl;
    Sleep(150);
    gotoxy(x, y+4);
    cout<<"Enter one the following number : ";
    cin>>number;
    Sleep(150);
    return number;
    
}
int checkPassword(int number)
{
    int password;
    gotoxy(x, y);
    cout<<"ENTER PASSWORD : ";
    cin>>password;
    if(number==1 && password==123)
    {
        gotoxy(x,y+1);
        cout<<"Successfully loged in ";
        return 0;
    }
    if(number==2 && password==111)
    {
        gotoxy(x,y+1);
        cout<<"Successfully loged in ";
        return 0;
    }
    if(number==3 && password==121)
    {
        gotoxy(x,y+1);
        cout<<"Successfully loged in ";
        return 0;
    }
    if((number==1 && password!=123) || (number==2 && password!=111) || (number==3 && password!=121))
    {
        gotoxy(x,y+1);
        cout<<"INCORRECT PASSWORD"<<endl;
        gotoxy(x,y+2);
        cout<<"Enter any key to return to menu : ";
        getch();
        deletepassword();
        main();
    }


}

void deleteMenu()
{
    gotoxy(x,y);
    cout<<"         ";
    Sleep(150);
    gotoxy(x,y+1);
    cout<<"         ";
    Sleep(150);
    gotoxy(x,y+2);
    cout<<"               ";
    Sleep(150);
    gotoxy(x,y+3);
    cout<<"      ",
    Sleep(150);
    gotoxy(x,y+4);
    cout<<"                                      ";
    Sleep(150);
}
int deletepassword()
{
    gotoxy(x,y);
    cout<<"                    ";
    Sleep(150);
    gotoxy(x,y+1);
    cout<<"                             ";
    Sleep(150);
    cout<<"                                 ";
    Sleep(150);
    return 0;
}

    



void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}