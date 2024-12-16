#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
const int arraysize=10;
int printMenu();
int checkPassword(string(&student)[arraysize][6]);
int deletepassword();
int choice();
int AddRemoveTeacher();
int checkPhoneTeacher();
int addTeacher();
int removeTeacher();
int viewTeacher();
int functionalityAdministrator();
int printMenuStudent();
int addCourses();
int checkPasswordofTeacher();
int addStudent();
int removeStudent();
int viewCourses();
int removeCourses();
int coursesEnrollment();
int checkStudent(string usernameStudent,string passwordStudent);
int checkEmail(string (&student)[arraysize][6]);
int checkEmailTeacher();
int checkPhone(string (&student)[arraysize][6]);
int printMenuTeacher();
int manageStudent();
int viewStudent();
int menuWithoutAdmin();
int checkPasswordTeacher();
void setFontColor(int color);
bool administrator(string username,string password);
void viewDetails(int result);
void updateProfile(int result);
void printHeader();
void printBody();
void deleteMenu();
void gotoxy(int,int);
int checkPasswordTeacher();
void saveDataStudent(string (&student)[arraysize][6]);
void loadData(string (&student)[arraysize][6]);
int countStudent=0;
int x=4,y=7,countName=0,countPassword;
//const int arraysize=10;
string teacher[arraysize];
string username[arraysize];
string password[arraysize];
string subject[arraysize];
string name[arraysize];
string usernameStudent[arraysize];
string passwordStudent[arraysize];
string emailStudent[arraysize];
string course[arraysize];
string courseTeacher[arraysize];
string courseCode[arraysize];
string nameTeacher[arraysize];
string emailTeacher[arraysize];
string usernameTeacher[arraysize];
string passwordTeacher[arraysize];
string student[arraysize];
string section[arraysize];
string rollNo[arraysize];
int phoneTeacher[arraysize];
int phoneStudent[arraysize];
int signinsignup,result,selectRole;
int main()
{   
    string student[arraysize][6];
    loadData(student);
    cout<<countName;
    int answer;
    system("cls");
    printHeader();  
    Menu:deleteMenu();
    signinsignup = choice();
    deleteMenu();
    if(signinsignup==1)                         //user choses to signup                                    
    {
        setFontColor(1);
        gotoxy(x,y);
        int selectRole=printMenu();
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
                    int r=AddRemoveTeacher();
                    if(r==1)
                    {
                        deleteMenu();
                        addTeacher();
                    }
                    if(r==3)
                    {
                        deleteMenu();
                        viewTeacher();
                    }
                    if(r==2)
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
        if(selectRole==3)
        {
            checkStudent1:deleteMenu();
            gotoxy(x,y);
            Sleep(150);
            string passwordStudent,usernameStudent;
            cout<<"Enter your username : ";
            //cin>>usernameStudent[countName];
            cin>>usernameStudent;
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"Enter your password : ";
            //cin>>passwordStudent[countPassword];
            cin>>passwordStudent;
            int answer=checkStudent(usernameStudent,passwordStudent);                  //check the identity of student
            if(answer==0)
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
            if(answer==1)
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
                    deleteMenu();
                    int abc=coursesEnrollment();
                    if(abc==1)
                    {   
                        deleteMenu();
                        addCourses();
                    }    
                    if(abc==3)
                    {
                        deleteMenu();
                        viewCourses();
                    }
                    if(abc==2)
                    {
                        deleteMenu();
                        removeCourses();
                    }
                }
                if(a==4)
                {
                    deleteMenu();
                    viewDetails(result);
                }
                if(a==3)
                {
                    deleteMenu();
                    updateProfile(result);
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
       
        if(selectRole==2)
        {
            checkTeacher1:deleteMenu();
            string username,password;
            gotoxy(x,y);
            Sleep(150);
            cout<<"Enter your username : ";
            cin>>usernameTeacher[0];
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"Enter your password : ";
            cin>>passwordTeacher[0];
            int check=checkPasswordTeacher();
            if(check==0)
            {
                deleteMenu();
                gotoxy(x,y);
                cout<<"Wrong username or Password : ";
                goto checkTeacher1;
            }
            if(check==1)
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
                    int abc=manageStudent();
                    if(abc==1)
                    {   
                        deleteMenu();
                        addStudent();
                    }    
                    if(abc==3)
                    {
                        deleteMenu();
                        viewStudent();
                    }
                    if(abc==2)
                    {
                        deleteMenu();
                        removeStudent();
                    }
                }
                if(a==4)
                {
                    deleteMenu();
                    viewDetails(result);
                }
                if(a==3)
                {
                    deleteMenu();
                    updateProfile(result);
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
            cin>>student[countStudent][1];
            int check=checkPhone(student);
            if(check==0)
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
            if(check==1)
            {
                email2:gotoxy(x,y+2);
                Sleep(150);
                cout<<"Enter your email : ";
                cin>>student[countStudent][2];
                int c=checkEmail(student);
                if(c==0)
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
                if(c==1)
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
                    int f=checkPassword(student);
                    if(f==0)
                    {
                        gotoxy(x,y+4);
                        cout<<"Password should contain 8 letters/numbers ";
                        getch();
                        if(GetAsyncKeyState(VK_LEFT))
                        {
                            gotoxy(x,y+4);
                            cout<<"                                    ";
                            goto password; 
                        }    
                    }
                    if(f==1)
                    {
                        gotoxy(x,y+5);
                        Sleep(150);
                        cout<<"Your account is created : ";
                        saveDataStudent(student);
                        print_menu1:deleteMenu();
                        int a=printMenuStudent();
                        if(a==1)
                        {
                            deleteMenu();
                            printCourse0:int abc=coursesEnrollment();
                            if(abc==1)
                            {   
                                deleteMenu();
                                addCourses();
                            }    
                            if(abc==3)
                            {
                                deleteMenu();
                                viewCourses();
                            }
                            if(abc==2)
                            {
                                deleteMenu();
                                removeCourses();
                            }
                        }
                        if(a==4)
                        {
                            deleteMenu();
                            viewDetails(result);
                        }
                        if(a==3)
                        {
                            deleteMenu();
                            updateProfile(result);
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
        if(selectRole==1)
        {
            gotoxy(x,y);
            cout<<"Enter your name : ";
            cin>>nameTeacher[0];
            phone1:
            gotoxy(x,y+1);
            Sleep(150);
            cout<<"enter your phone : ";
            cin>>phoneTeacher[0];
            int d=checkPhoneTeacher();
            if(d==0)
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
            if(d==1)
            {
                email3:gotoxy(x,y+2);
                Sleep(150);
                cout<<"Enter your email : ";
                cin>>emailTeacher[0];
                int c=checkEmailTeacher();
                if(c==0)
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
                if(c==1)
                {
                    gotoxy(x,y+3);
                    Sleep(150);
                    cout<<"Enter your username : ";
                    cin>>usernameTeacher[0];
                    password1:gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"                                                         ";
                    gotoxy(x,y+4);
                    Sleep(150);
                    cout<<"Enter your password : ";
                    cin>>passwordTeacher[0];
                    int c=checkPasswordofTeacher();
                    if(c==0)
                    {
                        gotoxy(x,y+4);
                        cout<<"Password should contain 8 letters/numbers ";
                        getch();
                        if(GetAsyncKeyState(VK_LEFT))
                        {
                            gotoxy(x,y+4);
                            cout<<"                                          ";
                            goto password1; 
                        } 
                    }
                    if(c==1)
                    {
                        gotoxy(x,y+5);
                        Sleep(150);
                        cout<<"Your account is created : ";
                        print:deleteMenu();
                        int a=printMenuTeacher();
                        if(a==1)
                        {
                            deleteMenu();
                            int abc=manageStudent();
                            if(abc==1)
                            {   
                                deleteMenu();
                                addStudent();
                            }    
                            if(abc==3)
                            {
                                deleteMenu();
                                viewStudent();
                            }
                            if(abc==2)
                            {
                                deleteMenu();
                                removeStudent();
                            }
                        }
                        if(a==4)
                        {
                            deleteMenu();
                            viewDetails(result);
                        }
                        if(a==3)
                        {
                            deleteMenu();
                            updateProfile(result);
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
    cout<<"1.Add/Remove Teacher ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.view merit list ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.seat Management ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.Announcement ";
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
    cout<<"                          *************************************************************************************************"<<endl;
    cout<<"                          *                                 LEARNING MANAGEMENT SYSTEM                                    *"<<endl;;
    cout<<"                          *************************************************************************************************"<<endl;
    cout<<endl;
    cout<<endl;
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

int checkStudent(string usernameStudent,string passwordStudent)
{
    setFontColor(1);
    fstream file;
    int nameIdx=-1;
    bool value=false;
    string name;
    file.open("studentUserName.txt",ios::in);
    while(!file.eof())
    {
        nameIdx++;
        getline(file,name);
        if(usernameStudent==name)
        {
            value=true;
            break;
        }
    }
    file.close();
    if(value==true)
    {
        fstream file1;
        string password;
        int passwordIdx=-1;
        file1.open("studentPassword.txt",ios::in);
        while(!file1.eof())
        {
            passwordIdx++;
            getline(file1,password);
            if(passwordStudent==password)
            {
                break;
            }
        }
        file1.close();
        if(nameIdx==passwordIdx)
        {
            return 1;
        }
        if(nameIdx!=passwordIdx)                     
        {
            return 0;
        }
    }
    if(value==false)
    {
        return 0;
    }
}
int printMenuStudent()
{
    setFontColor(1);
    int number;
    gotoxy(x,y);
    Sleep(150);
    cout<<"1.Course Enrollment";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.Aplly in a degree program : ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.update Profile : ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.View your details : ";
    gotoxy(x,y+4);
    Sleep(150);
    cout<<"Enter one of the following : ";
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
int addCourses()
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
int viewCourses()
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
void viewDetails(int result)
{
    setFontColor(1);
    if(result==2)
    {
        gotoxy(x,y);
        Sleep(150);
        cout<<"name  : "<<name[0];
        gotoxy(x,y+1);
        Sleep(150);
        cout<<"Phone  : "<<phoneStudent[0];
        gotoxy(x,y+2);
        Sleep(150);
        cout<<"Email  : "<<emailStudent[0];
    }  
    if(result==2 || result==1)
    {      
        gotoxy(x,y+3);
        Sleep(150);
        cout<<"Username : "<<usernameStudent[countName];
        gotoxy(x,y+4);
        Sleep(150);
        cout<<"Password  : "<<passwordStudent[countPassword];
    }
}
void updateProfile(int result)
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
        cout<<"1.Username   : "<<usernameStudent[countName];
        gotoxy(x,y+7);
        Sleep(150);
        cout<<"2.Password   : "<<passwordStudent[countPassword];
        cin>>n;
        if(n==1)
        {
            cout<<"enter your new username : ";
            cin>>usernameStudent[countName];
        }
        if(n==2)
        {
            cout<<"Enter youe new password : ";
            cin>>passwordStudent[countPassword];
        }
    }
    if(result==2)
    {
        gotoxy(x,y+6);
        Sleep(150);
        cout<<"you want to update your ";
        gotoxy(x,y+7);
        Sleep(150);
        cout<<"1.Name           :   "<<name[0];
        gotoxy(x,y+8);
        Sleep(150);
        cout<<"2.Phone          :   "<<phoneStudent[0];
        gotoxy(x,y+9);
        Sleep(150);
        cout<<"3.Email          :   "<<emailStudent[0];
        gotoxy(x,y+10);
        Sleep(150);
        cout<<"4.Username       :   "<<usernameStudent[countName];
        gotoxy(x,y+11);
        Sleep(150);
        cout<<"5.Password       :   "<<passwordStudent[countPassword];
        cin>>n;
        if(n==1)
        {
            cout<<"enter your new name      : ";
            cin>>name[0];
        }
        if(n==2)
        {
            cout<<"enter your new phone     : ";
            cin>>phoneStudent[0];
        }
        if(n==3)
        {
            cout<<"enter your new email     : ";
            cin>>emailStudent[0];
        }
        if(n==4)
        {
            cout<<"enter your new username  : ";
            cin>>usernameStudent[countName];
        }
        if(n==5)
        {
            cout<<"Enter youe new password  : ";
            cin>>passwordStudent[countPassword];
        }

    }
    cout<<"Changes saved : ";
    
}
int checkPhone(string (&student)[arraysize][6])
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
            return 1;
        }
        if(count!=10)
        {
            return 0;
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
int checkPhoneTeacher()
{
    int num=phoneTeacher[0];
        int count=0;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        if(count==10)
        {
            return 1;
        }
        if(count!=10)
        {
            return 0;
        }
}

int checkEmail(string (&student)[arraysize][6])
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
            return 1;
        }
        if(valid<2||valid>2)
        {
            return 0;
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
int checkEmailTeacher()
{
    string email1=emailTeacher[0];
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
            return 1;
        }
        if(valid<2||valid>2)
        {
            return 0;
        }

}
bool administrator(string username,string password)
{
    if(username=="admin" && password=="123")
    {
        return 1;
    }
    else
        return 0;     

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
    cout<<"1.Manage Student ";
    gotoxy(x,y+1);
    Sleep(150);
    cout<<"2.view Time table ";
    gotoxy(x,y+2);
    Sleep(150);
    cout<<"3.view profile ";
    gotoxy(x,y+3);
    Sleep(150);
    cout<<"4.update profile ";
    gotoxy(x,y+4);
    Sleep(150);
    cout<<"Enter one of the following  : ";
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
int checkPassword(string(&student)[arraysize][6])
{
    setFontColor(1);

        string p=student[countStudent][4];
        int count=0;
        while(p[count]!='\0')
        {
            count++;
        }
        if(count>=8)
        {
            return 1;
        }
        else
            return 0;
   //if(selectRole==1)
   //{
   //    string p=passwordTeacher[0];
   //    int count=0;
   //    while(p[count]!='\0')
   //    {
   //        count++;
   //    }
   //    if(count>=8)
   //    {
   //        return 1;
   //    }
   //    else
   //        return 0;
   //}
}
int checkPasswordofTeacher()
{
     string p=passwordTeacher[0];
        int count=0;
        while(p[count]!='\0')
        {
            count++;
        }
        if(count>=8)
        {
            return 1;
        }
        else
            return 0;

}
int checkPasswordTeacher()
{
    setFontColor(1);
    if(usernameTeacher[0]=="teacher" && passwordTeacher[0]=="123")
    {
        return 1;
    }
    else
        return 0;
}
void setFontColor(int color) 
{
// Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the console text color
    SetConsoleTextAttribute(hConsole, color);
}
void loadData(string (&student)[arraysize][6])
{
    fstream file;
    string name;
    file.open("StudentUserName.txt",ios::in);
    while(!file.eof())
    {
        getline(file,name);
        student[countStudent][0]=name;
        countStudent++;
    }
    file.close();
    //fstream file1;
    //string password;
    //file1.open("StudentPassword.txt",ios::in);
    //while(!file1.eof())
    //{
    //    getline(file1,password);
    //    passwordStudent[countPassword]=password;
    //    countPassword++;
    //}
    //file1.close();
    //fstream file2;
    //string password;
    //file1.open("phoneStudent.txt",ios::in);
    //while(!file2.eof())
    //{
    //    getline(file2,password);
    //    passwordStudent[countPassword]=password;
    //    countPassword++;
    //}
    //file2.close();
    //fstream file3;
    //string password;
    //file1.open("emailStudent.txt",ios::in);
    //while(!file3.eof())
    //{
    //    getline(file3,password);
    //    passwordStudent[countPassword]=password;
    //    countPassword++;
    //}
    //file3.close();
}
void saveDataStudent(string (&student)[arraysize][6])
{
    fstream file;
    //string name;
    file.open("StudentUserName.txt",ios::app);
    file<<endl<<student[countStudent][0];
    file.close();

    fstream file1;
    //string name;
    file1.open("phoneStudent.txt",ios::app);
    file1<<endl<<student[countStudent][1];
    file1.close();

    fstream file2;
    //string name;
    file2.open("emailStudent.txt",ios::app);
    file2<<endl<<student[countStudent][2];
    file2.close();

    fstream file3;
    //string name;
    file3.open("StudentPassword.txt",ios::app);
    file3<<endl<<student[countStudent][4];
    file3.close();
}