#include<iostream>
using namespace std;
void covid(int people,int tissue_paper);
main()
{
	int people,tissue_paper;
	cout<<"Enter the number of people in household : ";
	cin>>people;
	cout<<"Enter the number of rolls of tissue paper : ";
	cin>>tissue_paper;
	covid(people,tissue_paper);	
}
void covid(int people,int tissue_paper)
{
	int total_tp=tissue_paper*500;     	//total sheets of tissue paper
	int tp_used=14*people*57;		//total sheets people used in 14 days
	int days=total_tp/(people*57);
	if(total_tp<tp_used)
	{
		cout<<"your tissue paper will last only "<<days<<" days!. Buy more" ;	
	}
	if(total_tp>tp_used)
	{
		cout<<"your tissue paper will last  "<<days<<" days!. No need to buy more" ;
	}

}