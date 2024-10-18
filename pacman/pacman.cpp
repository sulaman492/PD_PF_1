#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int);
void printMaze();
void printPacman(int,int);
void printGhost(int,int);
int movePlayer();
void movePlayerRight();
void movePlayerLeft();
void movePlayerUp();
void movePlayerDown();
int decideMovement(int);
void deletePacman();
void moveGhost();
void deleteGhost();
void moveGhostRight();
void moveGhostLeft();

int px=2,py=2;
int gx=3,gy=2;

main()
{
    printMaze();
    printPacman(px,py);
    deletePacman();    
    while(true)
    {
    int result=movePlayer();
    decideMovement(result);
    Sleep(50);
    deletePacman();
    if(gx>2)
    {
        moveGhostRight();
    }
    while(gx>80)
    {
        moveGhostLeft();
        main();

    }
    
    }

}

void printMaze()
{   
    cout<<"######################################################################################"<<endl; 
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"||                                                                                   ||"<<endl;
    cout<<"#######################################################################################"<<endl;
}
    
void printPacman(int px,int py)
{
    
    gotoxy(px,py);
    cout<<"p";
}
void printGhost(int gx, int gy)
{
    gotoxy(gx,gy);
    cout<<"g";
}
int movePlayer()
{
    if(GetAsyncKeyState(VK_LEFT))
    {
        return 1;
    }
    else if(GetAsyncKeyState(VK_RIGHT))
    {
        return 2;
    }
    else if(GetAsyncKeyState(VK_UP))
    {
        return 3;
    }
    else if(GetAsyncKeyState(VK_DOWN))
    {
        return 4;
    }
}
void deletePacman()
{
    gotoxy(px,py);
    cout<<" ";
}
void movePlayerLeft()
{
    px=px-1;
    gotoxy(px,py);
    printPacman(px,py);
}

void movePlayerRight()
{
    px=px+1;
    gotoxy(px,py);
    printPacman(px,py);

}
void movePlayerUp()
{
    py=py-1;
    gotoxy(px,py);
    printPacman(px,py);
}
void movePlayerDown()
{
    py=py+1;
    gotoxy(px,py);
    printPacman(px,py);
}
int decideMovement(int result)
{
    if(result==1)
    {
        movePlayerLeft();
    }
    if(result==2)
    {
        movePlayerRight();
    }
    if(result==3)
    {
        movePlayerUp();
    }
    if(result==4)
    {
        movePlayerDown();
    }
    return 0;

}
void moveGhostLeft()
{
    gx=gx-1;
    gotoxy(gx,gy);
    cout<<"g";
    Sleep(50);
    deleteGhost();    
}
void moveGhostRight()
{
        gx=gx+1;
        gotoxy(gx,gy);
        Sleep(50);
        deleteGhost();
        cout<<"g";
}
int decideMovementGhost()
{
    if(gx>3)
    {
        return 0;
    }
    if(gx>80)
    {
        return 1;
    }

}
void deleteGhost()
{

    gotoxy(gx,gy);
    cout<<" ";
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}