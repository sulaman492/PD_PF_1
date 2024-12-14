#include <iostream>
#include <conio.h>
#include <windows.h>
#include <chrono>
#include <random>
#include <array>
#include <ctime>
#include <chrono>
using namespace std;

const int MAZE_WIDTH = 149;                                                    // Width of the maze
const int MAZE_HEIGHT = 36;                                                    // Height of the maze
int px = 73, py = 23;                                                          // Player position
int ex1L = 15, ey1L, ex2L = 15, ey2L, ex3L = 15, ey3L;                         // Left-to-right enemies
int ex1R = MAZE_WIDTH, ey1R, ex2R = MAZE_WIDTH, ey2R, ex3R = MAZE_WIDTH, ey3R; // Right-to-left enemies
int sx, sy, bR = 0, bL = 0;                                                    // Shooting coordinates
int score = 0, Lives = 5;
int enemyHit = 0;

// Function prototypes
void printMaze();
int printIntro();
void gameOver();
void setColor(int color);
void shoot();
void printPlayer(bool facingRight);
void clearPlayer();
void movePlayer(int dx, int dy);
void updateEnemies();
void clearEnemy(int x, int y, int width, int height);
void moveEnemyLeftToRight(int &ex, int &ey, const string &enemyShape);
void moveEnemyRightToLeft(int &ex, int &ey, const string &enemyShape);
int getRandomInteger();
void gotoxy(int x, int y);
char getCharAtXY(int x, int y);
void hideCursor();
void checkPlayerCollision();
int bulletsXR[1000];
int bulletsYR[1000];
int bulletsXL[1000];
int bulletsYL[1000];
string state = "Right";
string face = "Right";
bool shooting = true;
int main()
{
    system("cls");
    int option=printIntro();
    if(option==1)
        {
        system("cls");
        printMaze();
        while (true)
        {
            if(Lives<1)
            {
                gameOver();
                break;
            }
            hideCursor();
            // Handle player movement
            gotoxy(60, 2);
            setColor(14);
            cout << "score:" << score <<"                       " ;
            setColor(10);
            cout<<"Lives :"<<Lives;
            if (GetAsyncKeyState(VK_LEFT) && px > 66)
            {
                movePlayer(-1, 0);
                state = "Left";
                face = "Left";
            }
            else if (GetAsyncKeyState(VK_RIGHT) && px < 94)
            {
                movePlayer(1, 0);
                state = "Right";
                face = "Right";
            }
            else if (GetAsyncKeyState(VK_UP) && py > 6)
            {
                if (sy == 9 || sy == 12 || sy == 15 || sy == 18 || sy == 21 || sy == 24 || sy == 27 || sy == 30 || sy == 33 || sy == 36 || sy == 39 || sy == 42)
                {
                    movePlayer(0, -2);
                    state = "Right";
                }
                else
                {
                    movePlayer(0, -1);
                    state = "Right";
                }
            }
            else if (GetAsyncKeyState(VK_DOWN) && py < 40)
            {
                if (sy == 7 || sy == 10 || sy == 13 || sy == 16 || sy == 19 || sy == 22 || sy == 25 || sy == 28 || sy == 31 || sy == 34 || sy == 37 || sy == 40)
                {
                    movePlayer(0, 2);
                    state = "Right";
                }
                else
                {
                    movePlayer(0, 1);
                    state = "Right";
                }
            }

            // Update enemies
            updateEnemies();
            checkPlayerCollision();

            // Shooting logic
            if (GetAsyncKeyState(VK_SPACE) && face == "Right")
            {
                gotoxy(bulletsXR[bR] = sx + 12, bulletsYR[bR] = sy);
                bR++;
                shooting=false;
            }
            if (GetAsyncKeyState(VK_SPACE) && face == "Left")
            {
                gotoxy(bulletsXL[bL] = sx - 5, bulletsYL[bL] = sy);
                bL++;
                shooting=false;
            }
            if(bL>0 || bR>0)
            {
                Sleep(0); // Control game speed if player is not shooting
            }
            else 
                Sleep(10);
            //else
              //  Sleep(5);
            shoot();
        }
    }
}
int printIntro()
{
    int option;
    setColor(2);
    cout<<".___________. __    __  .______      .___   ___.   ______    __   __                                                           "<<endl;     
    cout<<"|           ||  |  |  | |   _  \\    |  \\ /   |  /  __  \\ |  | |  |                                                              "<<endl;    
    cout<<"`---|  |----`|  |  |  | |  |_)  |    |  \\  /  | |  |  |  | |  | |  |                                                                  "<<endl;   
    cout<<"    |  |     |  |  |  | |      /     |  |\\/|  | |  |  |  | |  | |  |                                                                  "<<endl;
    cout<<"    |  |     |  `--'  | |  |\\\\----.|  |   |  | |  `--'  | |  | |  `----.                                                                         "<<endl;
    cout<<"    |__|     \\______/  | _| `._____||__|   |__| \\______/  |__| |_______|                                                                                 "<<endl;
    cout<<"                                                                                                                                                                   ";
    cout<<endl;
    cout<<endl;
    setColor(6);
    cout<<"1.Start"<<endl;
    cout<<"2.Instruction"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>option;
    return option;
}
void printBeforeMaze()
{
    setColor(1);
    cout << "          ";
}

void printMaze()
{
    setColor(8);
    cout << "                                                                                                                                                    " << endl;
    cout << "                                                                                                                                                    " << endl;
    cout << "                                                                                                                                                    " << endl;
    cout << "                                                                                                                                                    " << endl;
    printBeforeMaze();
    cout << "###################################################################################################################################################" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#                                                                                                                                                 # " << endl;
    printBeforeMaze();
    cout << "#______________________________________________________                                             ______________________________________________#" << endl;
}

void printPlayer(bool facingRight)
{
    char wheel = 233;
    char turnright = 201;
    char turnleft = 187;
    char straight = 205;
    char bottomleft = 200;
    char bottomright = 188;
    char straightline = 186;
    char cross = 206;
    // if(facingRight)
    if (face == "Right")
    {
        gotoxy(px, py);
        cout << " " << wheel << "   " << wheel << endl;
        gotoxy(px, py + 1);
        cout << turnright << straight << straight << straight << straight << straight << turnleft << endl;
        gotoxy(sx = px, sy = py + 2);
        cout << straightline << straight << straight << straight << straight << straight << cross << straight << straight << straight << straight << straight << endl;
        gotoxy(px, py + 3);
        cout << bottomleft << straight << straight << straight << straight << straight << bottomright << endl;
        gotoxy(px, py + 4);
        cout << " " << wheel << "   " << wheel << endl;
    }
    if (face == "Left")
    {
        gotoxy(px, py);
        cout << "       " << wheel << "   " << wheel << endl;
        gotoxy(sx = px, sy = py + 1);
        cout << "      " << turnright << straight << straight << straight << straight << straight << turnleft << endl;
        gotoxy(px, py + 2);
        cout << straight << straight << straight << straight << straight << straight << cross << straight << straight << straight << straight << straight << straightline << endl;
        gotoxy(px, py + 3);
        cout << "      " << bottomleft << straight << straight << straight << straight << straight << bottomright << endl;
        gotoxy(px, py + 4);
        cout << "       " << wheel << "   " << wheel << endl;
    }
}

void clearPlayer()
{
    for (int i = 0; i < 5; i++)
    {
        gotoxy(px, py + i);
        cout << string(16, ' ');
    }
}

void movePlayer(int dx, int dy)
{
    setColor(10);
    clearPlayer();
    px += dx;
    py += dy;
    printPlayer(dx >= 0); // Face right if moving right or stationary
}

void updateEnemies()
{
    setColor(4);
    static const string enemyShape1 = "<====[O]";
    static const string enemyShape2 = "[@]-->";
    static const string enemyShape3 = "[@]--[@]";

    moveEnemyLeftToRight(ex1L, ey1L, enemyShape1);
    moveEnemyLeftToRight(ex2L, ey2L, enemyShape2);
    moveEnemyLeftToRight(ex3L, ey3L, enemyShape3);

    moveEnemyRightToLeft(ex1R, ey1R, enemyShape1);
    moveEnemyRightToLeft(ex2R, ey2R, enemyShape2);
    moveEnemyRightToLeft(ex3R, ey3R, enemyShape3);
}

void clearEnemy(int x, int y, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        gotoxy(x, y + i);
        cout << string(width, ' ');
    }
}

void moveEnemyLeftToRight(int &ex, int &ey, const string &enemyShape)
{
    clearEnemy(ex, ey, enemyShape.size(), 2);
    ex++;
    if (ex > MAZE_WIDTH - enemyShape.size())
    {
        ex = 15;
        ey = getRandomInteger();
    }
    gotoxy(ex, ey);
    cout << enemyShape;
}

void moveEnemyRightToLeft(int &ex, int &ey, const string &enemyShape)
{
    clearEnemy(ex, ey, enemyShape.size(), 2);
    ex--;
    if (ex < 15)
    {
        ex = MAZE_WIDTH - 1;
        ey = getRandomInteger();
    }
    gotoxy(ex, ey);
    cout << enemyShape;
}

int getRandomInteger()
{
    static int uniqueCount = 0;                                                  // Keeps track of unique values generated
    static int numbers[13] = {5, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42}; // Static array to persist across calls
    static bool used[13] = {false};                                              // Tracks which numbers are used

    // Reset the array and used tracker after 6 unique numbers
    if (uniqueCount == 6)
    {
        for (int i = 0; i < 13; ++i)
        {
            used[i] = false;
        }
        uniqueCount = 0;
    }

    // Generate a unique random number
    int num;
    do
    {
        num = rand() % 13; // Random index between 0 and 12
    } while (used[num]); // Repeat until an unused number is found

    used[num] = true; // Mark the number as used
    uniqueCount++;    // Increment the count of unique numbers
    return numbers[num];
}
void shoot()
{   
        int enemyHit1R = 0, enemyHit2R = 0, enemyHit3R = 0, enemyHit1L = 0, enemyHit2L = 0, enemyHit3L = 0;
        //shooting = false;

        // Right-facing bullets
        setColor(15);
        for (int i = 0; i < bR; i++)
        {
            if (bulletsXR[i] != 152) // If the bullet is on screen
            {
                gotoxy(bulletsXR[i], bulletsYR[i]);
                cout << " "; // Clear the previous bullet
                gotoxy(bulletsXR[i] + 1, bulletsYR[i]);
                cout << "o"; // Move the bullet right
                bulletsXR[i] = bulletsXR[i] + 1;
            }
            if (bulletsXR[i] == 152)
            {
                gotoxy(bulletsXR[i], bulletsYR[i]);
                cout << " ";
            }

    // Check for collision with each enemy (both left and right enemies)

                // Check for collision with left enemies
               if (bulletsXR[i] == ex1L && bulletsYR[i] == ey1L)
               {
                   bulletsXR[i] = 152; // Remove the bullet
               //    //if (enemyHit1L == 3)
               //    {
                       clearEnemy(ex1L, ey1L, 8, 2); // Clear the enemy
                       ex1L = 15;
                       ey1L = getRandomInteger(); // Respawn enemy
                       score += 10;               // Increase score
                       //enemyHit1L = 0;            // Reset the hit counter
                //    }
               //    //else
               //    {
                     //  enemyHit1L++; // Increment hit counter
               //    }
                 }
                else if (bulletsXR[i] == ex2L && bulletsYR[i] == ey2L)
                {
                    bulletsXR[i] = 152; // Remove the bullet
                        clearEnemy(ex2L, ey2L, 8, 2); // Clear the enemy
                        ex2L = 15;
                        ey2L = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase scor
                }
                else if (bulletsXR[i] == ex3L && bulletsYR[i] == ey3L)
                {
                    bulletsXR[i] = 152; // Remove the bullet
                        clearEnemy(ex3L, ey3L, 8, 2); // Clear the enemy
                        ex3L = 15;
                        ey3L = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                      //  enemyHit3L = 0;            // Reset the hit counter
                      //  enemyHit3L++; // Increment hit counter
                }

                // Check for collision with right enemies
                if (bulletsXR[i] == ex1R && bulletsYR[i] == ey1R)
                {
                    bulletsXR[i] = 152; // Remove the bullet
                        clearEnemy(ex1R, ey1R, 8, 2); // Clear the enemy
                        ex1R = 15;
                        ey1R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                }
                else if (bulletsXR[i] == ex2R && bulletsYR[i] == ey2R)
                {
                    bulletsXR[i] = 152; // Remove the bullet
                        clearEnemy(ex2R, ey2R, 8, 2); // Clear the enemy
                        ex2R = 15;
                        ey2R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                }
                else if (bulletsXR[i] == ex3R && bulletsYR[i] == ey3R)
                {
                    bulletsXR[i] = 152; // Remove the bullet
                        clearEnemy(ex3R, ey3R, 8, 2); // Clear the enemy
                        ex3R = 15;
                        ey3R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                }
            
        }
        // Left-facing bullets
        for (int i = 0; i < bL; i++)
        {
            if (bulletsXL[i] != 11) // If the bullet is on screen
            {
                gotoxy(bulletsXL[i], bulletsYL[i]);
                cout << " "; // Clear the previous bullet
                gotoxy(bulletsXL[i] - 1, bulletsYL[i]);
                cout << "o"; // Move the bullet left
                bulletsXL[i] = bulletsXL[i] - 1;
            }
                // Check for collision with left enemies
                if (bulletsXL[i] == ex1L && bulletsYL[i] == ey1L)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                   // if (enemyHit1L == 3)
                    {
                        clearEnemy(ex1L, ey1L, 8, 2); // Clear the enemy
                        ex1L = 15;
                        ey1L = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                     //   enemyHit1L = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit1L++; // Increment hit counter
                    }
                }
                else if (bulletsXL[i] == ex2L && bulletsYL[i] == ey2L)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                    //if (enemyHit2L == 3)
                    {
                        clearEnemy(ex2L, ey2L, 8, 2); // Clear the enemy
                        ex2L = 15;
                        ey2L = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                      //  enemyHit2L = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit2L++; // Increment hit counter
                    }
                }
                else if (bulletsXL[i] == ex3L && bulletsYL[i] == ey3L)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                    //if (enemyHit3L == 3)
                    {
                        clearEnemy(ex3L, ey3L, 8, 2); // Clear the enemy
                        ex3L = 15;
                        ey3L = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                        //enemyHit3L = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit3L++; // Increment hit counter
                    }
                }

                // Check for collision with right enemies
                if (bulletsXL[i] == ex1R && bulletsYL[i] == ey1R)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                    //if (enemyHit1R == 3)
                    {
                        clearEnemy(ex1R, ey1R, 8, 2); // Clear the enemy
                        ex1R = 15;
                        ey1R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                        enemyHit1R = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit1R++; // Increment hit counter
                    }
                }
                else if (bulletsXL[i] == ex2R && bulletsYL[i] == ey2R)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                    //if (enemyHit2R == 3)
                    {
                        clearEnemy(ex2R, ey2R, 8, 2); // Clear the enemy
                        ex2R = 15;
                        ey2R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                      //  enemyHit2R = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit2R++; // Increment hit counter
                    }
                }
                else if (bulletsXL[i] == ex3R && bulletsYL[i] == ey3R)
                {
                    bulletsXL[i] = 11; // Remove the bullet
                    //if (enemyHit3R == 3)
                    {
                        clearEnemy(ex3R, ey3R, 8, 2); // Clear the enemy
                        ex3R = 15;
                        ey3R = getRandomInteger(); // Respawn enemy
                        score += 10;               // Increase score
                      //  enemyHit3R = 0;            // Reset the hit counter
                    }
                    //else
                    {
                      //  enemyHit3R++; // Increment hit counter
                    }
                }
            if (bulletsXL[i] == 11)
            {
                gotoxy(bulletsXL[i], bulletsYL[i]);
                cout << " ";
            }
        }
    }

    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    char getCharAtXY(int x, int y)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CHAR_INFO charInfo;
        COORD bufferCoord = {0, 0};
        SMALL_RECT readRegion = {x, y, x, y};
        ReadConsoleOutput(hConsole, &charInfo, {1, 1}, bufferCoord, &readRegion);
        return charInfo.Char.AsciiChar;
    }
    void setColor(int color)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, color);
    }
    void hideCursor()
    {
        HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cursorInfo;

        GetConsoleCursorInfo(consoleHandle, &cursorInfo); // Get current cursor settings
        cursorInfo.bVisible = FALSE;                      // Set visibility to false
        SetConsoleCursorInfo(consoleHandle, &cursorInfo); // Apply changes
    }
    void gameOver()
    {
        system("cls");
        setColor(13);
        cout<<"***********************************************************************************************************************************************************"<<endl;
        cout<<"                                                                   Game Over"<<endl;
        cout<<"***********************************************************************************************************************************************************"<<endl;
    }
void checkPlayerCollision()
{
    for (int i = 0; i < 5; i++) // Check all rows of the player sprite
    {
        if ((px == ex1R && (py + i) == ey1R) || (px == ex2R && (py + i) == ey2R) ||
            (px == ex3R && (py + i) == ey3R) || (px == ex1L && (py + i) == ey1L) || 
            (px == ex2L && (py + i) == ey2L) || (px == ex3L && (py + i) == ey3L))
        {
            Lives -= 1; // Reduce Lives
            //cout << "Player hit! Lives remaining: " << Lives << endl; // Debug
            break; // Exit once a collision is detected
        }
    }
}