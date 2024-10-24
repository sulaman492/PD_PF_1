#include <iostream>
using namespace std;

int calculatePrice(int, int);

int main() {
    int money, year;

    cout << "Enter money : ";
    cin >> money;
    cout << "Enter the year : ";
    cin >> year;

    int result = calculatePrice(money, year);

    if (result >= 0) 
    {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left." << endl;
    } else 
    {
        cout << "He will need " << -result << " dollars to survive." << endl; 
    }

    return 0;
} 
int calculatePrice(int money, int year)
{
    int totalExpenses = 0; 
    int presentAge = 18; 
    int remainingMoney;
    for (int x = 1800; x <= year; x= x+1) 
    {
        if (x % 2 == 0) {
            totalExpenses =totalExpenses + 12000;
        } else {
            totalExpenses =totalExpenses + (12000 + 50 * presentAge);
        }
        presentAge= presentAge + 1; 
    }
    remainingMoney = money - totalExpenses;
    return remainingMoney;

}

