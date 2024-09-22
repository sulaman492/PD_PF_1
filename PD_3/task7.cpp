#include <iostream>
using namespace std;
int main()
{

	string name;
	int adult_price;
	int child_price;
	int adult_sold;
	int child_sold;
	int charity;
	int amount_generated;
	int donation;
	int remainig_amount;
	cout<<"Enter the name of movie : ";
	cin>>name;
	cout<<"Enter the adult ticket price : $";
	cin>>adult_price;
	cout<<"Enter the child ticket price : $";
	cin>>child_price;
	cout<<"Enter the number of adult ticket sold : ";
	cin>>adult_sold;
	cout<<"Enter the number of child ticket sold : ";
	cin>>child_sold;
	cout<<"Enter the percentage of the amount to be donated to charity : ";
	cin>>charity;
	amount_generated=(adult_price * adult_sold) + (child_price * child_sold);
	donation=amount_generated * charity/100;
	remainig_amount=amount_generated - donation;
	cout<<"Total amount generated from ticket sales : $" << amount_generated<<endl;
	cout<<"Donation to charity : $ " << donation<<endl;
	cout<<"Remainig amount after donation is : $" << remainig_amount <<endl;
	

}