#include <iostream>
using namespace std;

void calculatePoolState(float V, float P1, float P2, float H);

int main()
{
    float V, P1, P2, H;
    cout << "Enter the pool volume (V) in liters: ";
    cin >> V;

    cout << "Enter the flow rate of P1 in liters per hour: ";
    cin >> P1;

    cout << "Enter the flow rate of pipe 2 in liters per hour: ";
    cin >> P2;

    cout << "Enter number of hours the pipes are left open: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);
    return 0;
}

void calculatePoolState(float V,float P1, float P2, float H)
{
    float totalWater = (P1 * H) + (P2 * H);

    if (totalWater <= V)
    {
    	float percentageFilled = (totalWater * 100) / V;

        float contributionP1 = (P1 * H * 100) / totalWater;
        float contributionP2 = (P2 * H * 100) / totalWater;

        cout << "The pool is " << percentageFilled << "% filled." << endl;
        cout << "The contribution of pipe 1 is " << contributionP1 << "%." << endl;
        cout << "The contribution of pipe 2 is " << contributionP2 << "%." << endl;
    }
    if(totalWater > V)
    {
        float overflow = totalWater - V;
		float hours = overflow/(P1+P2); 
		cout<<"for "<<hours<<" hours the pool overflows with "<<overflow<<" litre ";
       
    }
}