#include<iostream>
#include<string>
using namespace std;
void print_menu();
void calculate_aggregate(int,int,int);
void compare_marks(string name1,string name2, int st1, int st2);
main()
{
	print_menu();
	cout<<endl;
	int ecat,inter,matric;
	cout<<"Enter your ecat marks : ";
	cin>>ecat;
	cout<<"Enter your inter marks : ";
	cin>>inter;
	cout<<"Enter your matric marks : ";
	cin>>matric;
	calculate_aggregate(ecat,inter,matric);
	cout<<endl;
	int st1,st2;
	string name1,name2;
	cout<<"Enter name of first student : ";
	cin>>name1;
	cout<<"Enter name of second student : ";
	cin>>name2;
	cout<<"Enter ecat marks of first student : ";
	cin>>st1;
	cout<<"Enter ecat marks of second student : ";
	cin>>st2;
	compare_marks(name1,name2,st1,st2);
}
void print_menu()
{
	cout<<"University Of Engineering And Technology : ";
} 
void calculate_aggregate(int ecat,int inter,int matric)
{
	int aggregate;
	ecat=(ecat*100)/400;
	matric=(matric*100)/1100;
	inter=(inter*100)/570;
	aggregate=(ecat*0.5)+(matric*0.1)+(inter*0.4);
	cout<<"Your aggregate is : "<<aggregate;
}
void compare_marks(string name1,string name2,int st1, int st2)
{
	if(st1>>st2)
	{
		cout<<"First roll assigned to : "<<name1;
	}		
	if(st2>>st1)
	{
		cout<<"First roll assigned to : "<<name2;
	}		



}