#include<iostream>
#include<windows.h>
#include<conio.h>
#include<ctime>
using namespace std;
void gotoxy(int s, int);
void printMaze();
void printPacman(int,int);
void printGhost(int,int);
int movepacman();
void movepacmanRight();
void movepacmanLeft();
void movepacmanUp();
void movepacmanDown();
int decideMovement(int);
void deletePacmanRight();
void moveGhost();
void deleteGhostRight();
void moveGhostRight();
void moveGhostLeft();
void deleteGhostLeft();
void cursorhide();
void deletePacmanUp();
void deletePacmanDown();
void deletePacmanLeft();
void deleteGhostUpVertical();
void deleteGhostDownVertical();
void setColor(int );
void deleteGhostHorizontalRight();
void deleteGhostHorizontalLeft();
void showScore();
void setConsoleFontSize(int size);
void pp();
int printWin();
int getRandomInteger();

char getCharAtxy(short int x, short int y);
int px=2,py=36;
int gx1=2,gy1=1;
int gx2=71,gy2=1;
int gx3=2,gy3=26;
int score=0;
int lives=3;
int wx=41,wy=18,tx=0,ty=0;

main()
{

    system("cls");
    printMaze();  
    gotoxy(wx,wy);
    cout<<"win point";
    while(true)
    {
    getRandomInteger();
    printPacman(px,py);
    Sleep(10);
    int result=movepacman();
    decideMovement(result);
    if(lives<3)
    {
        cout<<"Enter any key to continue : ";
        getch();
    }
    moveGhostRight();
    }

}
int printWin()
{
    system("cls");
    setColor(1);
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                      YOU WON                         "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                          ENTER ANY KEY TO RESTART THE GAME :         "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    getch();
    main();
}
void printMaze()
{
    setColor(1);
    cout<<"#########################################################################################"<<endl; 
    cout<<"||                                                                                      ||"<<endl;
    cout<<"||... ____ .....  _________  ...... |&&|.......  ____ ..........           ________  .. ||"<<endl;
    cout<<"||.. |    |..... |         | ...... |&&|....... |    |..........          |        | ...||"<<endl;
    cout<<"||.. |____|..... |_________| ...... |&&|....... |____|..........          |________| .. ||"<<endl;
    cout<<"||.................. _ ........................................ _ ...     ..............||"<<endl;
    cout<<"||..................| |........................................| |...     ..............||"<<endl;
    cout<<"||..................| |........................................| |...     ..............||"<<endl;
    cout<<"||_________ ........| |..........._____________________........| |...     ... __________||"<<endl;
    cout<<"||         |........| |........... ........ || ................| |..      ...|          ||"<<endl;
    cout<<"||         |........| |_________ .......... || ...... _________| |..      .. |          ||"<<endl;
    cout<<"||_________|........| |_________|.......... || ......|_________| |..      ...|__________||"<<endl;
    cout<<"||..................| |.................... || ................| |..      ..............||"<<endl;
    cout<<"||..................| |.....................||.................| |..      ..............||"<<endl;
    cout<<"||..................| |.....................||.................| |..      ............. ||"<<endl;
    cout<<"|||.................|_|........................................|_|..      ..............||"<<endl;
    cout<<"|||..............................._______         _______...........      ..............||"<<endl;
    cout<<"|||________......................|                       |..........      ......_________|"<<endl;
    cout<<"||         |.....................|                       |..........      ....|         ||"<<endl;
    cout<<"||         |.....................|_______________________|..........      ....|         ||"<<endl;
    cout<<"||_________|................||..............................||......      ....|_________||"<<endl;
    cout<<"||..........................||.........._____________.......||......      ..............||"<<endl;
    cout<<"||..........................||.........|_____   _____|......||......      ..............||"<<endl;
    cout<<"||..........................||...............| |............||......      ..............||"<<endl;
    cout<<"||................... ______||...............| |............||_______     ..............||"<<endl;
    cout<<"||.................. |_______|...............|_|............||_______|    ..............||"<<endl;
    cout<<"||                                                                                      ||"<<endl;
    cout<<"||......._________..................................................     _________......||"<<endl;   
    cout<<"||......|_______..|.................................................    |.._______|.....||"<<endl;
    cout<<"||..............|.|......................_____________..............    |.|.............||"<<endl;
    cout<<"||..............|.|.....................|_____..._____|.............    |.|.............||"<<endl;
    cout<<"||.........  ...|_|...........................|.|...................    |_|.............||"<<endl;
    cout<<"||......................_................    .|.|............._......     ..............||"<<endl;
    cout<<"||........... .........|.|......... ......    |_|............|.|.....     ..............||"<<endl;
    cout<<"||.....................|.|...............................    |.|.....     ..............||"<<endl;
    cout<<"||............. .._____|.|_____....................   .._____|.|______    ..............||"<<endl;
    cout<<"||...........    |_____________|....................   |______________|   ..............||"<<endl;
    cout<<"||######################################################################################||"<<endl;
}
    
void showScore()
{
    gotoxy(100,17);
    setConsoleFontSize(100);
    setColor(5);
    cout<<"  ";
    cout<<"SCORE : "<<score<<endl;
    gotoxy(100,19);
    cout<<"LIVES  :"<<lives;

}
    
void printPacman(int px,int py)
{
    setColor(2);
    gotoxy(px,py);
    cout<<"p";
}
void printGhost(int gx1, int gy1)
{
    setColor(4);
    gotoxy(gx1,gy1);
    cout<<"g";
}
int movepacman()
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
int decideMovement(int result)
{
    if(result==1)
    {
        movepacmanLeft();
        deletePacmanLeft();
    }
    if(result==2)
    {
        movepacmanRight();
        deletePacmanRight();
    }
    if(result==3)
    {
        movepacmanUp();
        deletePacmanUp();
    }
    if(result==4)
    {
        movepacmanDown();
        deletePacmanDown();
    }

}
void movepacmanLeft()
{
    px=px-1;
    char ch=getCharAtxy(px,py);
    if(ch!='#' && ch!='|' && ch!='_' && ch!='-')
    {
        if(ch=='.')
        {
            score=score+1;
            showScore();
        }
        gotoxy(px,py);
        printPacman(px,py);
    }
    if(ch=='#' || ch=='|' || ch=='_' || ch=='-')
    {
        px=px+1;
        printPacman(px,py);
    }   
}

void movepacmanRight()
{
    px=px+1;
    char ch=getCharAtxy(px,py);
    if(ch!='#' && ch!='|' && ch!='_' && ch!='-')
    {
        
        if(ch=='.')
        {
            score=score+1;
            showScore();
        }
        gotoxy(px,py);
        printPacman(px,py);
    }
    if(ch=='#' || ch=='|' || ch=='_' || ch=='-')
    {
        px=px-1;
        printPacman(px,py);
    }   
}
void movepacmanUp()
{
    py=py-1;
    char ch=getCharAtxy(px,py);
    if(ch!='#' && ch!='|'&& ch!='_' && ch!='-')
    { 
        if(ch=='.')
        {
            score=score+1;
             showScore();
        }
        gotoxy(px,py);
        printPacman(px,py);
    }
    if(ch=='#' || ch=='|'|| ch=='_' || ch=='-')
    {
        py=py+1;
        printPacman(px,py);
    }   
}
void movepacmanDown()
{
    py=py+1;
    char ch=getCharAtxy(px,py);
    if(ch!='#' && ch!='|' && ch!='_' && ch!='-')
    {    
        if(ch=='.')
        {
            score=score+1;
            showScore();
        }
        gotoxy(px,py);
        printPacman(px,py);
    }
    if(ch=='#' || ch=='|' || ch=='_' || ch=='-')
    {
        py=py-1;
        printPacman(px,py);
    }   
}
void deletePacmanLeft()
{
    int sx=px+1;
    gotoxy(sx,py);
    cout<<" ";
}
void deletePacmanUp()
{
    int sx=py+1;
    gotoxy(px,sx);
    cout<<" ";
}
void deletePacmanDown()
{
    int sx=py-1;
    gotoxy(px,sx);
    cout<<" ";

}
void deletePacmanRight()
{
    Sleep(10);
    int sx=px-1;
    gotoxy(sx,py);
    cout<<" ";
}
void moveGhostLeft()
{
    while(gx1>2 )
    { 
        printPacman(px,py);
        Sleep(5);
        int result=movepacman();
        decideMovement(result);
        Sleep(5);
        gx1=gx1-1;
        printGhost(gx1,gy1);
        Sleep(5);
        deleteGhostLeft();
        gx3=gx3-1;
        printGhost(gx3,gy3);
        Sleep(5);
        deleteGhostHorizontalLeft();
        if(gy2>2)
        {
        gy2=gy2-1;
        gotoxy(gx2,gy2);
        cout<<"g";
        deleteGhostUpVertical();
        }
        if(((gx1==px && gy1==py) ||(gx2==px && gy2==py) || (gx3==px && gy3==py)) && lives!=0 )
        {
            lives=lives-1;
            main();
        }
        if(((gx1==px && gy1==py)||(gx2==px && gy2==py) || (gx3==px && gy3==py)) && lives==0 )
        {
            Sleep(100);
            system("cls");
            setColor(4);
            cout<<"             **************************************************************"<<endl;
            cout<<"                                          GAME OVER                        "<<endl;
            cout<<"             **************************************************************"<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                           Enter Any Key To Restart The Game               "<<endl;
            getch();
            main();
        }
        if(px==wx && py==wy && score>50)
        {
            printWin();
        }
    }
    moveGhostRight();   
}
void moveGhostRight()

{   while(gx1<81 )
    { 
        printPacman(px,py);
        Sleep(5);
        int result=movepacman();
        decideMovement(result);
        Sleep(5);
        gx1=gx1+1;
        Sleep(5);
        printGhost(gx1,gy1);
        deleteGhostRight();
        gx3=gx3+1;
        printGhost(gx3,gy3);
        Sleep(5);
        deleteGhostHorizontalRight();
        if(gy2<36)
        {
        gy2=gy2+1;
        gotoxy(gx2,gy2);
        cout<<"g";
        deleteGhostDownVertical();
        }
        if(((gx1==px && gy1==py) ||(gx2==px && gy2==py) || (gx3==px && gy3==py)) && lives!=0 )
        {
            lives=lives-1;
            main();
        }
        if(((gx1==px && gy1==py) ||(gx2==px && gy2==py) || (gx3==px && gy3==py)) && lives==0)
        {
            Sleep(100);
            system("cls");
            setColor(4);
            cout<<"             **************************************************************"<<endl;
            cout<<"                                          GAME OVER                        "<<endl;
            cout<<"             **************************************************************"<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                                       YOUR SCORE  IS :                                "<<score<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                                                                           "<<endl;
            cout<<"                               Enter Any Key To Restart The Game               "<<endl;
            getch();
            main();
        }
        if(px==wx && py==wy && score>50)
        {
            printWin();
        }
    }
    moveGhostLeft();
}
void deleteGhostRight()
{
    int sx=gx1-1;
    gotoxy(sx,gy1);
    cout<<" ";
}
void deleteGhostLeft()
{
    int sx=gx1+1;
    gotoxy(sx,gy1);
    cout<<" ";
}
void deleteGhostUpVertical()
{
    int sy=gy2+1;
    gotoxy(gx2,sy);
    cout<<" ";
}
void deleteGhostDownVertical()
{
    int sy=gy2-1;
    gotoxy(gx2,sy);
    cout<<" ";
}
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void cursorhide()
{
    HANDLE hStdOut = NULL;
    CONSOLE_CURSOR_INFO curInfo;

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &curInfo);
    curInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &curInfo);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;

    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect)
               ? ci.Char.AsciiChar
               : ' ';
}
void setColor(int color) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the console text color
    SetConsoleTextAttribute(hConsole, color);
}

void deleteGhostHorizontalLeft()
{
    int sx=gx3+1;
    gotoxy(sx,gy3);
    cout<<" ";
}

void deleteGhostHorizontalRight()
{
    int sx=gx3-1;
    gotoxy(sx,gy3);
    cout<<" ";
}
void setConsoleFontSize(int size) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Check if console handle is valid
    if (hConsole == INVALID_HANDLE_VALUE) {
        std::cerr << "Error: Invalid console handle" << std::endl;
        return;
    }

    // Set up font information structure
    CONSOLE_FONT_INFOEX fontInfo = {0};
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    fontInfo.nFont = 0;
    fontInfo.dwFontSize.X = 0;    // Width of each character in the font
    fontInfo.dwFontSize.Y = size; // Height of the font in logical units
    fontInfo.FontFamily = FF_DONTCARE;
    fontInfo.FontWeight = FW_NORMAL;
    wcscpy_s(fontInfo.FaceName, L"Consolas"); // Set font name

    // Apply font settings to the console
    if (!SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo)) {
        std::cerr << "Error: Could not set console font size" << std::endl;
    }
}

int getRandomInteger()
{
    setColor(6);
    int array[5]={22,45,33,25,18};
    srand(time(0));
    int number=rand()%5;
    tx=array[number];
    char ch=getCharAtxy(tx,ty);
    if(ch!='$')
    {
        ty=6;
        gotoxy(tx,ty);
        cout<<"$";
        char ch=getCharAtxy(tx,ty);
        if(ch!='$')
        {
            getRandomInteger();
        }
    }

}