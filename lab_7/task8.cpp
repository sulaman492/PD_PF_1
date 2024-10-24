#include <iostream>
using namespace std;

void calculateMoney(int, int, int);
main()
{
    int age, washingMachinePrice, toyPrice;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;

    cout << "Enter the unit price of a toy: ";
    cin >> toyPrice;

    calculateMoney(age, washingMachinePrice, toyPrice);
}
void calculateMoney(int age, int washingMachinePrice, int toyPrice)
{
    int totalMoney = 0;
    int toysCount = 0;
    int moneyGift = 10;
    float result;
    for (int x = 1; x <= age; x = x + 1)
    {
        if (x % 2 == 0)
        {
            totalMoney =totalMoney + (moneyGift - 1);
            moneyGift =moneyGift + 10;
        }
        else
        {
            toysCount = toysCount + 1;
        }
    }

    totalMoney =totalMoney + (toysCount * toyPrice);

    if (totalMoney >= washingMachinePrice)
    {
        result = totalMoney - washingMachinePrice;
        cout << "Yes! \n"<<result;
    }
    else
    {
        result =  washingMachinePrice - totalMoney ;
        cout << "No! \n"<<result;
    }
}
