#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
const int arraysize=10;
int AddRemoveTeacher();
int countTeacher=0;
int manageStudent();


int countStudent=0;
int x=4,y=19,countName=0,countPassword;

int functionalityAdministrator();
bool administrator(string username,string password);
int addTeacher();
int removeTeacher();
int viewTeacher();
void loadDataAdmin(string(&Admin)[arraysize][2],int countAdmin);

                  
                  
                                                                        //all the functions of students
int printMenuStudent();                                                 //showing the menu of student 
bool checkStudent(string usernameStudent,string passwordStudent,string(&student)[arraysize][6]);       //checking the student if he is loging in
bool checkEmail(string (&student)[arraysize][6]);                       //checking email of student
bool checkPhone(string (&student)[arraysize][6]);                       //checking phone number of student
bool checkPassword(string(&student)[arraysize][6]);                     //checking password of student
int viewCourses();                                                      //addition of subjects
int removeCourses();                                                    //removal of subjects
int addCourses();                                                       //view your subjects
int coursesEnrollment();
void viewDetailsStudent(string(&student)[arraysize][6]);            //showing the details of student
void updateProfile(int result,string(&student)[arraysize][6]);          //updating the information of student
void saveDataStudent(string (&student)[arraysize][6]);                  //saving the data of student
void loadData(string (&student)[arraysize][6]);                         //loading the data of student




int printMenuTeacher();
int addStudent();
int removeStudent();
int viewStudent();
bool checkEmailTeacher(string (&teacher)[arraysize][6],int countTeacher);
bool checkTeacher(string username,string password,string(&teacher)[arraysize][6]);
bool checkPasswordOfTeacher(string (&teacher)[arraysize][6],int countTeacher);
bool checkPhoneTeacher(string (&teacher)[arraysize][6],int countTeacher);
void loadDataTeacher(string (&teacher)[arraysize][6],int countTeacher);                                //loading the data
void saveDataTeacher(string(&teacher)[arraysize][6],int countTeacher);
void viewDetailsTeacher(string(&teacher)[arraysize][6],int countTeacher);




                                                                        //additional functions
void setFontColor(int color);                                           //setting the font color    
void printHeader();                                                     //showing the header
void printBody();                                                       //showing the body
void deleteMenu();                                                      //deleting the menu
void gotoxy(int,int);                                                   //moving the cursor to a certain position 
int menuWithoutAdmin();                                                 //showing the menu without admin
string trim(const string& str);
int stringToInteger(const string& str);
int printMenu();
int deletepassword();
int choice();


//const int arraysize=10;
string teacher[arraysize];
string username[arraysize];
string password[arraysize];
string subject[arraysize];
//string name[arraysize];
//string usernameStudent[arraysize];
//string passwordStudent[arraysize];
//string emailStudent[arraysize];
string course[arraysize];
string courseTeacher[arraysize];
string courseCode[arraysize];
string nameTeacher[arraysize];
//string emailTeacher[arraysize];
//string usernameTeacher[arraysize];
//string passwordTeacher[arraysize];
string student[arraysize];
string section[arraysize];
string rollNo[arraysize];
int phoneTeacher[arraysize];
//int phoneStudent[arraysize];
int signinsignup,result,selectRole;
int countAdmin=0;
int main()
{   
    string student[arraysize][6];               //declaring an array for student
    string teacher[arraysize][6];               //declaring an array for Teacher
    string Admin[arraysize][2];               //declaring an array for Admin
    loadData(student);                          //loading the data of student    
    loadDataTeacher(teacher,countTeacher);                   //loading the data of teacher 
    loadDataAdmin(Admin,countAdmin);   
    int answer;
    system("cls");
    printHeader();  
    Menu:deleteMenu();
    signinsignup = choice();                    //showing the user to sign in sign up
    deleteMenu();
    if(signinsignup==1)                         //user choses to signin                                    
    {
        setFontColor(1);
        gotoxy(x,y);
        int selectRole=printMenu();             //showing the menu  
        if(selectRole==1)                       //user choses admin
        {
            checkAdmin:deleteMenu();
            string username,password;
            gotoxy(x,y);
            Sleep(150);
            cout<<"Enter your username : ";
            cin>>username;
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"Enter your password : ";
            cin>>password;
            bool result=administrator(username,password);   //check the identity of admin
            if(result==1)
            {
                checkTeacher:deleteMenu();                   
                gotoxy(x,y);
                cout<<"successfully loged in : ";
                getch();
                teacher:deleteMenu();
                int result=functionalityAdministrator();
                deleteMenu();
                if(result==1)
                {
                    //int r=AddRemoveTeacher();
                    deleteMenu();
                    addTeacher();
                }
                if(result==2)
                {
                        deleteMenu();
                        viewTeacher();
                }
                if(result==3)
                {
                        deleteMenu();
                        removeTeacher();
                }
                while(true)
                    {
                        getch();
                        if(GetAsyncKeyState(VK_LEFT))
                        {
                            goto teacher;
                        }
                    }
                if(result==5)
                {
                    goto Menu;
                }
            
            }
            if(result==0)
            {
                gotoxy(x,y);
                cout<<"wrong username or password : "<<endl;
                gotoxy(x,y+1);
                Sleep(150);
                cout<<"Enter to any key to continue : ";
                getch();
                deleteMenu();
                goto checkAdmin;
            }
        }       
        if(selectRole==3)                       //user chooses student
        {
            checkStudent1:deleteMenu();
            gotoxy(x,y);
            Sleep(150);
            string passwordStudent,usernameStudent;
            cout<<"Enter your username : ";
            cin>>usernameStudent;
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"Enter your password : ";
            cin>>passwordStudent;
            bool answer=checkStudent(usernameStudent,passwordStudent,student);                  //check the identity of student
            if(answer==true)
            {
                gotoxy(x,y);
                Sleep(150);
                cout<<"Incorrect userame or password : ";
                gotoxy(x,y+1);
                Sleep(150);
                cout<<"Enter any key to continue : ";
                getch();
                goto checkStudent1;
            }
            if(answer==false)
            {
                deleteMenu();
                gotoxy(x,y);
                Sleep(150);
                cout<<"Succesfully loged in : ";
                gotoxy(x,y+1);
                Sleep(150);
                cout<<"Enter any key to continue : ";
                getch();         
                printMenu:deleteMenu();  
                int a=printMenuStudent();
                if(a==1)
                {
                    //deleteMenu();
                    //int abc=coursesEnrollment()
                    deleteMenu();
                    addCourses();
                }
                if(a==2)
                {
                    deleteMenu();
                    viewCourses();
                }
                if(a==3)
                {
                    deleteMenu();
                    removeCourses();
                }
                if(a==5)
                {
                    deleteMenu();
                    viewDetailsStudent(student);
                }
                if(a==4)
                {
                    deleteMenu();
                    updateProfile(result,student);
                }
                while(true)
                {
                    getch();
                    if(GetAsyncKeyState(VK_LEFT))
                    {
                        goto  printMenu;  
                    }
                }    

            }
        }
       
        if(selectRole==2)                              //user choses teacher by signing in
        {
            checkTeacher1:deleteMenu();             
            string username,password;   
            gotoxy(x,y);
            Sleep(150);
            cout<<"Enter your username : ";                 
            cin>>username;
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"Enter your password : ";
            cin>>password;
            bool check=checkTeacher(username,password,teacher); //checking the username and password of teacher
            if(check==false)
            {
                deleteMenu();
                gotoxy(x,y);
                cout<<"Wrong username or Password : ";
                getch();
                goto checkTeacher1;
            }
            if(check==true)
            {
                deleteMenu();
                gotoxy(x,y);
                cout<<"Succesfully loged in : ";
                getch();
                menuTeacher:deleteMenu();
                int a=printMenuTeacher();
                if(a==1)   
                {   
                    deleteMenu();
                    addStudent();
                }    
                if(a==2)
                {
                    deleteMenu();
                    viewStudent();
                }
                if(a==3)
                {
                    deleteMenu();
                    removeStudent();
                }
                if(a==5)
                {
                    deleteMenu();
                    viewDetailsTeacher(teacher,countTeacher);
                }
                if(a==4)
                {
                    deleteMenu();
                    updateProfile(result,student);
                }
                while(true)
                {
                    getch();
                    if(GetAsyncKeyState(VK_LEFT))
                    {
                        goto  menuTeacher;  
                    }
                }    
            }
        }                        
    }
    if(signinsignup==2)                             //user chposes to signup/create account
    {
        selectRole=menuWithoutAdmin();              //showing menu without admin       
        deleteMenu();
        if(selectRole==2)                          //user is student
        {
            gotoxy(x,y);
            cout<<"Enter your name : ";            //name of student
            cin>>student[countStudent][0];
            phone:gotoxy(x,y+1);
            Sleep(150);
            cout<<"enter your phone : ";
            cin>>student[countStudent][1];          //password of student
            bool check=checkPhone(student);          //checking password of student
            if(check==false)                            //if password is wrong
            {
                gotoxy(x,y+1);
                cout<<"Wrong phone number :                 ";
                getch();
                if(GetAsyncKeyState(VK_LEFT))
                {
                    gotoxy(x,y+1);
                    cout<<"                                     ";
                    goto phone; 
                } 
            }
            if(check==true)                              //if password is right
            {
                email2:gotoxy(x,y+2);
                Sleep(150);
                cout<<"Enter your email : ";
                cin>>student[countStudent][2];
                bool c=checkEmail(student);              //chrcking email of student
                if(c==false)                                //if email is wrong
                {
                    gotoxy(x,y+2);
                    cout<<"Wrong email :                             ";
                    getch();
                    if(GetAsyncKeyState(VK_LEFT))
                    {
                        gotoxy(x,y+2);
                        cout<<"                                       ";
                        goto email2; 
                    } 
                }
                if(c==true)                                  //if email is right
                {
                    gotoxy(x,y+3);
                    Sleep(150);
                    cout<<"Enter your username : ";
                    cin>>student[countStudent][3];
                    //saveDataName();
                    password:gotoxy(x,y+4);
                    Sleep(150);
                    gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"                                                 ";
                    gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"Enter your password : ";
                    cin>>student[countStudent][4];
                    //saveDataPassword();
                    //bool f=checkPassword(student);
                    //if(f==false)
                    //{
                    //    gotoxy(x,y+4);
                    //    cout<<"Password should contain 8 letters/numbers ";
                    //    getch();
                    //    if(GetAsyncKeyState(VK_LEFT))
                    //    {
                    //        gotoxy(x,y+4);
                    //        cout<<"                                    ";
                    //        goto password; 
                    //    }    
                    //}
                    //if(f)
                    {
                        gotoxy(x,y+5);
                        Sleep(150);
                        cout<<"Your account is created : ";
                        saveDataStudent(student);
                        print_menu1:deleteMenu();
                        int a=printMenuStudent();
                        if(a==1)
                        {
                            //deleteMenu();
                            //printCourse0:int abc=coursesEnrollment();
                            deleteMenu();
                            addCourses();
                        }  
                        if(a==2)
                        {
                            deleteMenu();
                            viewCourses();
                        }
                        if(a==3)
                        {
                            deleteMenu();
                            removeCourses();
                        }
                        if(a==5)
                        {
                            deleteMenu();
                            viewDetailsStudent(student);
                        }
                        if(a==4)
                        {
                            deleteMenu();
                            updateProfile(result,student);
                        }
                        while(true)
                        {
                            getch();
                            if(GetAsyncKeyState(VK_LEFT))
                            {
                                goto  print_menu1;  
                            }
                        }
                    }   
                }    
            }          
        }
        if(selectRole==1)                               //user chooses to signup as a teacher
        {
            gotoxy(x,y);
            cout<<"Enter your name : ";                 //name of teacher
            cin>>teacher[countTeacher][0];
            phone1:
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"enter your phone : ";                //phone of teacher
            cin>>teacher[countTeacher][1];
            bool d=checkPhoneTeacher(teacher,countTeacher);                  //checking phone of teacher
            if(d==false)                                                    //if phone is wrong
            {
                gotoxy(x,y+1);
                cout<<"Wrong phone number : ";
                getch();
                if(GetAsyncKeyState(VK_LEFT))
                {
                    gotoxy(x,y+1);
                    cout<<"                            ";
                    goto phone1; 
                } 
            }
            if(d==true)                                                    //is phone is right
            {
                email3:gotoxy(x,y+2);
                Sleep(150);
                cout<<"Enter your email : ";
                cin>>teacher[countTeacher][2];
                bool c=checkEmailTeacher(teacher,countTeacher);             //checking the email of teacher
                if(c==false)                                                //if email is wrong
                {
                    gotoxy(x,y+2);
                    cout<<"Wrong email :                           ";
                    getch();
                    if(GetAsyncKeyState(VK_LEFT))
                    {
                        gotoxy(x,y+2);
                        cout<<"                                           ";
                        goto email3; 
                    } 
                }
                if(c==true)                                                 //if email is right
                {
                    gotoxy(x,y+3);
                    Sleep(150);
                    cout<<"Enter your username : ";
                    cin>>teacher[countTeacher][3];
                    password1:gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"                                                         ";
                    gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"Enter your password : ";
                    cin>>teacher[countTeacher][4];
                    //bool c=checkPasswordOfTeacher(teacher,countTeacher);     //checking the password of teacher
                    //if(c==false)                                             //if password is false    
                    //{
                    //    gotoxy(x,y+4);
                    //    cout<<"Password should contain 8 letters/numbers ";
                    //    getch();
                    //    if(GetAsyncKeyState(VK_LEFT))
                    //    {
                    //        gotoxy(x,y+4);
                    //        cout<<"                                          ";
                    //        goto password1; 
                    //    } 
                    //}
                    //if(c==true)                                             //if password is true
                    {
                        gotoxy(x,y+5);
                        Sleep(150);
                        cout<<"Your account is created : ";                 //account is created
                        saveDataTeacher(teacher,countTeacher);              //saving the data of teacher in txt file
                        getch();
                        print:deleteMenu();
                        int a=printMenuTeacher();                           //showing the menu of teacher
                        if(a==1)
                        {
                            deleteMenu();    
                            addStudent();                                   //adding the student
                        }    
                        if(a==2)
                        {
                            deleteMenu();
                            viewStudent();                                  //showing all the student
                        }
                        if(a==3)
                        {
                            deleteMenu();
                            removeStudent();                                //removing the student
                        }
                        if(a==5)
                        {
                            deleteMenu();
                            viewDetailsTeacher(teacher,countTeacher);                    //showing the details
                        }
                        if(a==4)
                        {
                            deleteMenu();
                            updateProfile(result,student);                 //updating the profile     
                        }
                        while(true)
                        {
                            getch();
                            while(GetAsyncKeyState(VK_LEFT))
                            {
                                goto  print;  
                            }
                        }
                    }        

                }
            }
        }   
    }
}
int menuWithoutAdmin()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    Sleep(150);
    cout<<"1.Teacher";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.Student ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"Enter one of the following : ";
    cin>>number;
    return number;
}
int functionalityAdministrator()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"1.AddTeacher";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.ViewTeacher ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.Remove Teacher ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.View Your Details";
    gotoxy(x,y+4);
    Sleep(150);
    cout<<"Enter one of the following : ";
    while(GetAsyncKeyState(VK_LEFT))
    {
        return 5;
    }
    cin>>number;
    return number;
    
}

void printHeader()
{
    setFontColor(4);
    cout<<"                                 ##      ######   ####   #####   ##  ##  ######  ##  ##   ####                    "<<endl; 
    cout<<"                                 ##      ##      ##  ##  ##  ##  ### ##    ##    ### ##  ##                       "<<endl;
    cout<<"                                 ##      ####    ######  #####   ## ###    ##    ## ###  ## ###                   "<<endl;
    cout<<"                                 ##      ##      ##  ##  ##  ##  ##  ##    ##    ##  ##  ##  ##                   "<<endl;
    cout<<"                                 ######  ######  ##  ##  ##  ##  ##  ##  ######  ##  ##   ####                    "<<endl;
    cout<<"                                                                                                                  "<<endl;
    cout<<"                                 ##   ##   ####   ##  ##   ####    ####   ######  ##   ##  ######  ##  ##  ###### "<<endl;    
    cout<<"                                 ### ###  ##  ##  ### ##  ##  ##  ##      ##      ### ###  ##      ### ##    ##   "<<endl;    
    cout<<"                                 ## # ##  ######  ## ###  ######  ## ###  ####    ## # ##  ####    ## ###    ##   "<<endl;        
    cout<<"                                 ##   ##  ##  ##  ##  ##  ##  ##  ##  ##  ##      ##   ##  ##      ##  ##    ##   "<<endl;
    cout<<"                                 ##   ##  ##  ##  ##  ##  ##  ##   ####   ######  ##   ##  ######  ##  ##    ##   "<<endl;
    cout<<"                                                                                                 "<<endl;
    cout<<"                                  ####   ##  ##   ####   ######  ######  ##   ##                                 "<<endl;                
    cout<<"                                 ##       ####   ##        ##    ##      ### ###                                 "<<endl;                
    cout<<"                                  ####     ##     ####     ##    ####    ## # ##                                 "<<endl;            
    cout<<"                                     ##    ##        ##    ##    ##      ##   ##                                 "<<endl;                                
    cout<<"                                  ####     ##     ####     ##    ######  ##   ##                                 "<<endl;        
 
}
int printMenu()
{
    setFontColor(1);
    int number;
    gotoxy(x, y);
    cout<<"1.Administrator"<<endl;
    Sleep(150);
    gotoxy(x, y+1);
    cout<<"2.Teachers"<<endl;
    Sleep(150);
    gotoxy(x, y+2);
    cout<<"3.student"<<endl;
    Sleep(150);
    gotoxy(x, y+3);
    cout<<"4.Exit"<<endl;
    Sleep(150);
    gotoxy(x, y+4);
    cout<<"Enter one the following number : ";
    cin>>number;
    Sleep(150);
    deleteMenu();
    return number;
    
}
void deleteMenu()
{
    gotoxy(x,y);
    cout<<"                                                                                                                                                           "<<endl;
    cout<<"                                                                                                                                                           "<<endl;
    cout<<"                                                                                                                                                           "<<endl;
    cout<<"                                                                                                                                                           "<<endl;
    cout<<"                                                                                                                                                          "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                                   "<<endl;
    cout<<"                                                                                                                                                                    "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                       "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    cout<<"                                                                                                                                                               "<<endl;
    
    
    
}
int choice()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"1.Already have Account SignIn : ";
    Sleep(150);
    gotoxy(x,y+1);
    cout<<"2.No Account SignUp : ";
    Sleep(150);
    gotoxy(x,y+2);
    cout<<"Enter one of the following : ";
    cin>>number;
    deleteMenu();
    return number;
}



void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

bool checkStudent(string usernameStudent,string passwordStudent,string(&student)[arraysize][6])
{
    for(int i=0;i<10;i++)
    {
        if(trim(student[i][3])==usernameStudent)
        {
            if(trim(student[i][4])==passwordStudent)
            {
                return true;
            }
        }
    }
        return false;
}

//
//   int idxUserName,idxPassword;
//   fstream file;
//   string line;
//   const int targetIndex = 3; // 0-based index for the 4th column (username)
//   string name;
//   file.open("StudentName.txt", ios::in); // Open the file in read mode
//   if (!file.is_open()) {
//       cout << "Error: Unable to open file!" << endl;
//       return 1;
//   }
//   //cout << "Fourth column values (Usernames):" << endl;
//   string array[10];
//   int count=0;
//   int i=0;
//   // Read each line from the file
//   while (getline(file, line)) {
//       stringstream ss(line); // Process the current line
//       int index = 0;
//       bool found = false;
//
//       while (getline(ss, name, '*')) { // Split the line by *
//           if (index == targetIndex) {
//               //cout << name << endl; // Print the 4th value (username)
//             array[i]=name;
//               i++;
//               found = true;
//               break;
//           }
//         index++;
//       }
//
//       if (!found) {
//           cout << "Error: Line does not contain enough columns." << endl;
//       }
//   }
//
//   file.close(); // Always close the file
//   for(int i=0;i<10;i++)
//   {
//       if(usernameStudent==array[i])
//       {
//           idxUserName=i;
//           count++;
//           break;
//       }
//   }
//   fstream file1;
//   string line1;
//   const int targetIndex1 = 4; // 0-based index for the 5th column (username)
//   //string name;
//
//   file1.open("StudentName.txt", ios::in); // Open the file in read mode
//   if (!file1.is_open()) {
//       cout << "Error: Unable to open file!" << endl;
//       return 1;
//   }
//
//   //cout << "Fourth column values (Usernames):" << endl;
//   string array1[10];
//   string name1;
//   int j=0;
//   // Read each line from the file
//   while (getline(file1, line1)) {
//       stringstream ss(line); // Process the current line
//       int index = 0;
//       bool found = false;
//
//       while (getline(ss, name1, '*')) { // Split the line by *
//           if (index == targetIndex1) {
//               //cout << name << endl; // Print the 4th value (username)
//               array1[j]=name1;
//               j++;
//               found = true;
//               break;
//           }
//           index++;
//       }
//
//       if (!found) {
//           cout << "Error: Line does not contain enough columns." << endl;
//       }
//   }
//
//   file1.close(); // Always close the file
//   for(int i=0;i<10;i++)
//   {
//       if(passwordStudent==array1[i])
//       {
//           idxPassword=i;
//           count++;
//           break;
//       }
//   }
//   if(count==2 && idxUserName==idxPassword)
//   {
//       return true;
//   }
//   else
//       return false;
//
//}
//{
    //fstream file;
    //string line;
    //file.open("StudentName.txt", ios::in); // Open the file in read mode
    //if (!file.is_open()) {
    //    cout << "Error: Unable to open file!" << endl;
    //    return false; // Return false if the file cannot be opened
    //}
//
    //// Read each line from the file
    //while (getline(file, line)) {
    //    stringstream ss(line);  // Process the current line
    //    string fields[5];       // Array to hold the fields from the current line
    //    int index = 0;
//
    //    // Split the line into fields by '*' and store in the fields array
    //    while (getline(ss, fields[index], '*') && index < 5) {
    //        index++;
    //    }
//
    //    // Ensure the line has at least 5 fields (username and password exist)
    //    if (index == 5) {
    //        string fileUsername = fields[3]; // Username is the 4th field (index 3)
    //        string filePassword = fields[4]; // Password is the 5th field (index 4)
//
    //        // Compare the username and password with the input
    //        if (fileUsername == usernameStudent && filePassword == passwordStudent) {
    //            file.close(); // Close the file
    //            return true;  // Match found
    //        }
    //    }
    //}
//
    //file.close(); // Always close the file after processing
    //return false; // No match found
//}

//bool checkStudent(string usernameStudent, string passwordStudent)
//{
//    // Open the first file to check usernames
//    fstream file;
//    string line;
//    const int targetIndex = 3; // 0-based index for the 4th column (username)
//    string name;
//
//    file.open("StudentName.txt", ios::in); // Open the file in read mode
//    if (!file.is_open()) {
//        cout << "Error: Unable to open file!" << endl;
//        return 1;
//    }
//
//    // Declare an array to store usernames
//    string array[10];
//    int count = 0; // Counter to track matches
//    int i = 0;
//
//    // Read each line from the file
//    while (getline(file, line)) {
//        stringstream ss(line); // Process the current line
//        int index = 0;
//        bool found = false;
//
//        // Split the line by '*' delimiter
//        while (getline(ss, name, '*')) {
//            if (index == targetIndex) {
//                array[i] = name; // Store the 4th column value (username) in the array
//                i++; // Increment array index
//                found = true;
//                break; // Stop processing the current line
//            }
//            index++;
//        }
//
//        // Handle case where a line does not have enough columns
//        if (!found) {
//            cout << "Error: Line does not contain enough columns." << endl;
//        }
//    }
//
//    file.close(); // Always close the file after processing
//
//    // Check if the provided username matches any username in the array
//    int first;
//    for (first = 0; first < 10; first++) {
//        if (usernameStudent == array[first]) {
//            count++; // Increment count if a match is found
//            break;
//        }
//    }
//
//    // Open the file again to check passwords
//    fstream file1;
//    string line1;
//    const int targetIndex1 = 4; // 0-based index for the 5th column (password)
//
//    file1.open("StudentName.txt", ios::in); // Open the file in read mode
//    if (!file1.is_open()) {
//        cout << "Error: Unable to open file!" << endl;
//        return 1;
//    }
//
//    // Declare an array to store passwords
//    string array1[10];
//    string name1;
//    int j = 0; // Index for storing passwords in the array
//
//    // Read each line from the file
//    while (getline(file1, line1)) {
//        stringstream ss(line1); // Process the current line
//        int index = 0;
//        bool found = false;
//
//        // Split the line by '*' delimiter
//        while (getline(ss, name1, '*')) {
//            if (index == targetIndex1) {
//                array1[j] = name1; // Store the 5th column value (password) in the array
//                j++; // Increment array index
//                found = true;
//                break; // Stop processing the current line
//            }
//            index++;
//        }
//
//        // Handle case where a line does not have enough columns
//        if (!found) {
//            cout << "Error: Line does not contain enough columns." << endl;
//        }
//    }
//
//    file1.close(); // Always close the file after processing
//
//    // Check if the provided password matches any password in the array
//    int second;
//    for ( second = 0; second < 10; second++) {
//        if (passwordStudent == array1[second]) {
//            count++; // Increment count if a match is found
//            break;
//        }
//    }
//
//    // Return true if both username and password match, otherwise return false
//    if (first==second) {
//        return true;
//    } else
//        return false;
//}
//string trim(const string& str) {
//    size_t start = str.find_first_not_of(" \t\n\r");
//    size_t end = str.find_last_not_of(" \t\n\r");
//    return (start == string::npos || end == string::npos) ? "" : str.substr(start, end - start + 1);
//}
//
//// Function to check student credentials
//bool checkStudent(string usernameStudent, string passwordStudent) {
//    fstream file("StudentName.txt", ios::in); // Open the file in read mode
//    if (!file.is_open()) {
//        cout << "Error: Unable to open file!" << endl;
//        return false;
//    }
//
//    string line;
//    while (getline(file, line)) {
//        stringstream ss(line);  // Process the current line
//        string fields[5];       // Array to hold the 5 fields (name, phone, email, username, password)
//        int index = 0;
//
//        // Extract fields separated by '*'
//        while (getline(ss, fields[index], '*') && index < 5) {
//            fields[index] = trim(fields[index]); // Trim whitespace around the field
//            index++;
//        }
//
//        // Ensure we have all 5 fields in the current line
//        if (index == 5) {
//            string fileUsername = fields[3]; // Username is the 4th field (index 3)
//            string filePassword = fields[4]; // Password is the 5th field (index 4)
//
//            // Compare the username and password with the input
//            if (fileUsername == usernameStudent && filePassword == passwordStudent) {
//                file.close(); // Close the file
//                return true;  // Match found
//            }
//        }
//    }
//
   // file.close(); // Always close the file
    //return false; // No match found
//}
int printMenuStudent()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    Sleep(150);
    cout<<"1.Add Courses";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.View Courses: ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.Remove Courses : ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.Update Profile : ";
    gotoxy(x,y+4);
    Sleep(150);
    cout<<"5.View Your Details : ";
    gotoxy(x,y+5);
    Sleep(150);
    cout<<"Enter on of the following : ";
    cin>>number;
    return number;
}
int coursesEnrollment()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"Add Subject : ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"Remove subject : ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"View all subject : ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"Enter one of the following : ";
    cin>>number;
    return number;
}
int addCourses()            //adding the courses
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"How many Subject you want to add : ";
    cin>>number;
    for(int i=0;i<number;i++)
    {
        deleteMenu();
        string name,username,password;
        gotoxy(x,y);
        cout<<"1.Enter course name : ";
        cin>>course[i];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"2.Enter course teacher : ";
        cin>>courseTeacher[i];
        gotoxy(x,y+2);
        Sleep(150);
        cout<<"3.Enter course code : ";
        cin>>courseCode[i];
        gotoxy(x,y+3);
        Sleep(150);
    }
    gotoxy(x,y+4);
    cout<<"Coursesadded succesfully ";
    
}
int viewCourses()           //v
{
    setFontColor(1);
    gotoxy(x,y);
    cout<<"Course name                             course Teacher                               Course Code   "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<course[i]<<"\t\t\t\t\t\t"<<courseTeacher[i]<<"\t\t\t\t\t\t"<<courseCode[i]<<"\t\t\t\t\t"<<endl;
    }
}
int removeCourses()
{
    setFontColor(1);
    string n,p,q;
    gotoxy(x,y);
    cout<<"Enter the name of course you want to remove : ";
    cin>>n;
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"Enter the code of course you want to remove : ";
    cin>>p;
    gotoxy(x,y+2);
    cout<<"Enter the name teacher of that subject      : ";
    cin>>q;
    int idx=0;
    while(course[idx]!=n)
    {
        idx++;
    }
    for(int i=idx;i<9;i++)
    {
        course[i]=course[i+1];
        courseCode[i]=courseCode[i+1];
        courseTeacher[i]=courseTeacher[i+1];
    }
    Sleep(150);
    gotoxy(x,y+3);
    cout<<"Subject removed ";
    

}
void viewDetailsStudent(string(&student)[arraysize][6])//showing the details of student
{
    setFontColor(1);
        gotoxy(x,y);
        Sleep(150);
        cout<<"name  : "<<student[countStudent][0];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"Phone  : "<<student[countStudent][1];
        gotoxy(x,y+2);
        Sleep(150);
        cout<<"Email  : "<<student[countStudent][2];      
        gotoxy(x,y+3);
        Sleep(150);
        cout<<"Username : "<<student[countStudent][3];
        gotoxy(x,y+4);
        Sleep(150);
        cout<<"Password  : "<<student[countStudent][4];
    
}
void viewDetailsTeacher(string(&teacher)[arraysize][6],int countTeacher)//showing the details of student
{
    setFontColor(1);
        gotoxy(x,y);
        Sleep(150);
        cout<<"name  : "<<teacher[countTeacher][0];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"Phone  : "<<teacher[countTeacher][1];
        gotoxy(x,y+2);
        Sleep(150);
        cout<<"Email  : "<<teacher[countTeacher][2];      
        gotoxy(x,y+3);
        Sleep(150);
        cout<<"Username : "<<teacher[countTeacher][3];
        gotoxy(x,y+4);
        Sleep(150);
        cout<<"Password  : "<<teacher[countTeacher][4];
    
}
void updateProfile(int result,string(&student)[arraysize][6])
{
    setFontColor(1);
    int n;
    if(result==1)
    {
        gotoxy(x,y+5);
        Sleep(150);
        cout<<"you want to update your : ";
        gotoxy(x,y+6);
        Sleep(150);
        cout<<"1.Username   : "<<student[countName][3];
        gotoxy(x,y+7);
        Sleep(150);
        cout<<"2.Password   : "<<student[countName][4];
        cin>>n;
        if(n==1)
        {
            cout<<"enter your new username : ";
            cin>>student[countName][3];
        }
        if(n==2)
        {
            cout<<"Enter youe new password : ";
            cin>>student[countName][4];
        }
    }
    if(result==2)
    {
        gotoxy(x,y+6);
        Sleep(150);
        cout<<"you want to update your ";
        gotoxy(x,y+7);
        Sleep(150);
        cout<<"1.Name           :   "<<student[countName][0];
        gotoxy(x,y+8);
        Sleep(150);
        cout<<"2.Phone          :   "<<student[countName][1];
        gotoxy(x,y+9);
        Sleep(150);
        cout<<"3.Email          :   "<<student[countName][2];
        gotoxy(x,y+10);
        Sleep(150);
        cout<<"4.Username       :   "<<student[countName][3];
        gotoxy(x,y+11);
        Sleep(150);
        cout<<"5.Password       :   "<<student[countName][4];
        cin>>n;
        if(n==1)
        {
            cout<<"enter your new name      : ";
            cin>>student[countName][0];
        }
        if(n==2)
        {
            cout<<"enter your new phone     : ";
            cin>>student[countName][1];
        }
        if(n==3)
        {
            cout<<"enter your new email     : ";
            cin>>student[countName][2];
        }
        if(n==4)
        {
            cout<<"enter your new username  : ";
            cin>>student[countName][3];
        }
        if(n==5)
        {
            cout<<"Enter youe new password  : ";
            cin>>student[countName][4];
        }

    }
    cout<<"Changes saved : ";
    
}
bool checkPhone(string (&student)[arraysize][6])
{
    setFontColor(1);
    if(selectRole==2)
    {
        int num=stoi(student[countStudent][1]);
        int count=0;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        if(count==10)
        {
            return true;
        }
        if(count!=10)
        {
            return false;
        }
    }
    //if(selectRole==1)
    //{
    //    int num=phoneTeacher[0];
    //    int count=0;
    //    while(num>0)
    //    {
    //        num=num/10;
    //        count++;
    //    }
    //    if(count==10)
    //    {
    //        return 1;
    //    }
    //    if(count!=10)
    //    {
    //        return 0;
    //    }
    //}    
}
bool checkPhoneTeacher(string (&teacher)[arraysize][6],int countTeacher)
{
        int num=stringToInteger(teacher[countTeacher][1]);
        int count=0;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        if(count==10)
        {
            return true;
        }
        if(count!=10)
        {
            return false;
        }
}

bool checkEmail(string (&student)[arraysize][6])
{
    setFontColor(1);
    if(selectRole==2)
    {
        string email1=student[countStudent][2];
        int i=0,valid=0;
        while(email1[i]!='\0')
        {
            if(email1[i]=='@')
            {
                valid++;
            }
            if(email1[i]=='.')
            {
                valid++;
            }
            i++;
        }
        if(valid==2)
        {
            return true;
        }
        if(valid<2||valid>2)
        {
            return false;
        }
    }
    //if(selectRole==1)
    //{
    //    string email1=emailTeacher[0];
    //    int i=0,valid=0;
    //    while(email1[i]!='\0')
    //    {
    //        if(email1[i]=='@')
    //        {
    //            valid++;
    //        }
    //        if(email1[i]=='.')
    //        {
    //            valid++;
    //        }
    //        i++;
    //    }
    //    if(valid==2)
    //    {
    //        return 1;
    //    }
    //    if(valid<2||valid>2)
    //    {
    //        return 0;
    //    }
    //}
    
}
bool checkEmailTeacher(string(&teacher)[arraysize][6],int countTeacher)
{
    string email1=teacher[countTeacher][2];
        int i=0,valid=0;
        while(email1[i]!='\0')
        {
            if(email1[i]=='@')
            {
                valid++;
            }
            if(email1[i]=='.')
            {
                valid++;
            }
            i++;
        }
        if(valid==2)
        {
            return true;
        }
        if(valid<2||valid>2)
        {
            return false;
        }

}
bool administrator(string username,string password)
{

    fstream file;
    string line;
    const int targetIndex = 0; // 0-based index for the 0th column (username)
    string name;

    file.open("Admin.txt", ios::in); // Open the file in read mode
    if (!file.is_open()) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    //cout << "Fourth column values (Usernames):" << endl;
    string array[10];
    int i=0;
    // Read each line from the file
    while (getline(file, line)) {
        stringstream ss(line); // Process the current line
        int index = 0;
        bool found = false;

        while (getline(ss, name, '*')) { // Split the line by *
            if (index == targetIndex) {
                //cout << name << endl; // Print the 4th value (username)
                array[i]=name;
                i++;
                found = true;
                break;
            }
            index++;
        }

        if (!found) {
            cout << "Error: Line does not contain enough columns." << endl;
        }
    }

    file.close(); // Always close the file
    
    


    fstream file1;
    string line1;
    const int targetIndex1 = 1; // 0-based index for the 4th column (password)
    string name1;

    file1.open("Admin.txt", ios::in); // Open the file in read mode
    if (!file1.is_open()) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    //cout << "Fourth column values (Usernames):" << endl;
    string array1[10];
    int j=0;
    // Read each line from the file
    while (getline(file1, line1)) {
        stringstream ss(line1); // Process the current line
        int index = 0;
        bool found = false;

        while (getline(ss, name1, '*')) { // Split the line by *
            if (index == targetIndex1) {
                //cout << name << endl; // Print the 4th value (username)
                array1[j]=name1;
                j++;
                found = true;
                break;
            }
            index++;
        }

        if (!found) {
            cout << "Error: Line does not contain enough columns." << endl;
        }
    }

    file1.close(); // Always close the file
    int first,d=0;
    for(first=0;first<10;first++)
    {
        //cout<<array[first]<<"\t"<<array1[first]<<endl;
       if(trim(array[first])==username)
       {
           d=first;
           break;
       }
        //cout<<array[first]<<endl;
    }
    if(trim(array1[d])==password)
    {
        cout<<"true";
    }
    else   
       cout<<"false";

}

int AddRemoveTeacher()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"1.Add teacher : ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.Remove teacher : ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.View all Teacher : ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"Enter one of the following : ";
    cin>>number;
    return number;
}
int addTeacher()
{
    int number;
    gotoxy(x,y);
    cout<<"How many teacher you want to add : ";
    cin>>number;
    deleteMenu();
    for(int i=0;i<number;i++)
    {
        deleteMenu();
        gotoxy(x,y);
        cout<<"Enter Teacher name : ";
        cin>>teacher[i];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"Enter teacher subject : ";
        cin>>subject[i];
        gotoxy(x,y+3);
        Sleep(150);
        cout<<"Enter teacher username : ";
        cin>>username[i];
        gotoxy(x,y+4);
        Sleep(150);
        cout<<"Enter teacher password : ";
        cin>>password[i];
        gotoxy(x,y+5);
        Sleep(150);
    }
    gotoxy(x,y+6);
    Sleep(150);
    cout<<"Teacher added successfully : ";
}
int viewTeacher()
{
    setFontColor(1);
    gotoxy(x,y);
    int t=y;
    cout<<"Teacher name                     username                             password                        subject";
    for(int i=0;i<10;i++)
    {
        gotoxy(x,t+1);
        cout<<teacher[i]<<"                                   "<<username[i]<<"                                      "<<password[i]<<"                               "<<subject[i];
        t++;
    }
}
int removeTeacher()
{
    setFontColor(1);
    string name,sub;
    gotoxy(x,y);
    Sleep(150);
    cout<<"Enter the name of teacher you want to remove : ";
    cin>>name;
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"Enter teacher subject : ";
    cin>>sub;
    int idx=0;
    while(teacher[idx]!=name)
    {
        idx++;
    }
    for(int i=idx;i<9;i++)
    {
        teacher[i]=teacher[i+1];
        username[i]=username[i+1];
        password[i]=password[i+1];
        subject[i]=subject[i+1];
    }
    gotoxy(x,y+1);
    cout<<"Teacher removed succesfully  : ";
}
int printMenuTeacher()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"1.Add Student ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.View Student ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.Remove Student";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.Update profile ";
    gotoxy(x,y+4);
    Sleep(150);
    cout<<"5.View Your Details : ";
    gotoxy(x,y+5);
    Sleep(150);
    cout<<"5.Enter one of the following : ";
    cin>>number;
    return number;
}
int manageStudent()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    cout<<"1.Add Student : ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.Remove student : ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.View all student : ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"Enter one of the following : ";
    cin>>number;
    return number;
}
int addStudent()
{
    setFontColor(1);
    int n;
    gotoxy(x,y);
    cout<<"How many Student you want to add : ";
    cin>>n;
    deleteMenu();
    for(int i=0;i<n;i++)
    {
        deleteMenu();
        gotoxy(x,y);
        cout<<"Enter Student name : ";
        cin>>student[i];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"Enter student Roll no : ";
        cin>>rollNo[i];
        gotoxy(x,y+2);
        Sleep(150);
        cout<<"Enter student section : ";
        cin>>section[i];
    }
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"Student added succesfully ";
    
}
int viewStudent()
{
    setFontColor(1);
    gotoxy(x,y);
    cout<<"student name                             student roll no                               section   "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"\t"<<student[i]<<"\t\t\t\t\t"<<rollNo[i]<<"\t\t\t\t\t"<<section[i]<<"\t\t\t\t\t"<<endl;
    }
}
int removeStudent()
{
    setFontColor(1);
    string n,p,q;
    gotoxy(x,y);
    cout<<"Enter the name of student you want to remove : ";
    cin>>n;
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"Enter the roll no ofstudent you want to remove : ";
    cin>>p;
    gotoxy(x,y+2);
    cout<<"Enter the section of that student      : ";
    cin>>q;
    int idx=0;
    while(student[idx]!=n)
    {
        idx++;
    }
    for(int i=idx;i<9;i++)
    {
        student[i]=student[i+1];
        rollNo[i]=rollNo[i+1];
        section[i]=section[i+1];
    }
    Sleep(150);
    gotoxy(x,y+3);
    cout<<"student removed ";
}
bool checkPassword(string(&student)[arraysize][6])       //checking the password of student
{
    setFontColor(1);

        string p=student[countStudent][4];
        int count=0;
        while(p[count]!='\0')                           //counting the number of digits
        {
            count++;
        }
        if(count>=8)                                    //digits should be greater than 8
        {
            true;
        }
        else                                            //else false
            false;
}
bool checkPasswordOfTeacher(string(&teacher)[arraysize][6],int counTeacher)       //checking the password of student
{
    setFontColor(1);

        string p=(teacher[countTeacher][4]);
        int count=0;
        while(p[count]!='\0')                           //counting the number of digits
        {
            count++;
        }
        if(count>=8)                                    //digits should be greater than 8
        {
            true;
        }
        else                                            //else false
            false;
}

bool checkTeacher(string username, string password,string (&teacher)[arraysize][6])
{
    for(int i=0;i<10;i++)
    {
        if(trim(teacher[i][3])==username)
            return true;
    }
        return false;
}
    // Open the first file to check usernames

    //setFontColor(1);
    ////string p=student[countStudent][4];
    //    int count=0;
    //    while(p[count]!='\0')                           //counting the number of digits
    //    {
    //        count++;
    //    }
    //    if(count>=8)                                    //digits should be greater than 8
    //    {
    //        true;
    //    }
    //    else                                            //else false
    //        false;
    //

void setFontColor(int color) 
{
// Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the console text color
    SetConsoleTextAttribute(hConsole, color);
}
void loadData(string (&student)[arraysize][6])                  //loading the data
{
    fstream file;
    string name;
    file.open("StudentName.txt",ios::in);                       //opening the student name file in read mode 
    while(!file.eof())
    {
        getline(file,name);
        student[countStudent][0]=name;
        countStudent++;
    }
    file.close();                                           //closing the file
}
void saveDataStudent(string(&student)[arraysize][6])
{
    fstream file;
    string name;
    file.open("studentName.txt",ios::app);
    file<<student[countStudent][0]<<"*             "<<student[countStudent][1]<<"*             "<<student[countStudent][2]<<"*               "<<student[countStudent][3]<<"*              "<<student[countStudent][4]<<endl;
    file.close();

}
void loadDataTeacher(string (&teacher)[arraysize][6],int countTeacher)                  //loading the data
{
    fstream file;
    string name;
    file.open("teacherName.txt",ios::in);                       //opening the student name file in read mode 
    while(!file.eof())
    {
        getline(file,name);
        teacher[countTeacher][0]=name;
        countTeacher++;
    }
    file.close();                                           //closing the file
}
void saveDataTeacher(string(&teacher)[arraysize][6],int countTeacher)
{
    fstream file;
    string name;
    file.open("teacherName.txt",ios::app);
    file<<teacher[countTeacher][0]<<"*             "<<teacher[countTeacher][1]<<"*             "<<teacher[countTeacher][2]<<"*               "<<teacher[countTeacher][3]<<"*              "<<teacher[countTeacher][4]<<"*"<<endl;
    file.close();

}
void loadDataAdmin(string (&admin)[arraysize][2],int countAdmin)                  //loading the data
{
    fstream file;
    string name;
    file.open("Admin.txt",ios::in);                       //opening the student name file in read mode 
    while(!file.eof())
    {
        getline(file,name);
        admin[countAdmin][0]=name;
        countAdmin++;
    }
    file.close();                                           //closing the file
}
int stringToInteger(const string& str) {
    int result = 0;      // Holds the final integer
    bool isNegative = false; // Check for negative numbers
    int i = 0;           // Index for traversing the string

    // Check for an optional sign
    if (str[i] == '-') {
        isNegative = true;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Process each character in the string
    for (; i < str.size(); i++) {
        if (str[i] < '0' || str[i] > '9') { // Check if the character is not a digit
            throw invalid_argument("Invalid character in input string");
        }
        result = result * 10 + (str[i] - '0'); // Convert char to int and add to result
    }

    // Apply the sign if the number is negative
    if (isNegative) {
        result = -result;
    }

    return result;
}
string trim(const string& str) {
    size_t start = str.find_first_not_of(" \t\n\r");
    size_t end = str.find_last_not_of(" \t\n\r");
    return (start == string::npos || end == string::npos) ? "" : str.substr(start, end - start + 1);
}