#include <iostream>
using namespace std;
int main()
{

	
	int fertilizer_pound;
	int bag_cost;
	int area;
	int cost_per_pound;
	int cost_per_square_foot;
	cout<<"Enter the size of fertilizer bag in pound : ";
	cin>>fertilizer_pound;
	cout<<"Enter the cost of bag : $";
	cin>>bag_cost;
	cout<<"Enter the area in square feet that can be covered by the bag : ";
	cin>>area;
	cost_per_pound=bag_cost/fertilizer_pound;
	cost_per_square_foot=bag_cost/area;
	cout<<"Cost of fertilizer per pound : $"<<cost_per_pound<<endl;
	cout<<"Cost of fertilizing per square foot : $"<<cost_per_square_foot;

}




