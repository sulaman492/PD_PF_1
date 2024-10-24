#include <iostream>
using namespace std;

 main() 
{
    int n;
    
    cout << "Enter the number of integers (1 <= n <= 1000): ";
    cin >> n;

    float countP1, countP2, countP3, countP4, countP5;
    
    for (int x = 0; x < n; x = x+1) {
        int number;
        cout<<" Enter the Number : ";
        cin >> number;
        
        if (number < 200) 
        {
            countP1 = countP1 + 1; 
        } 
        else if (number >= 200 && number < 400) 
        {
            countP2 = countP2 + 1;
        } 
        else if (number >= 400 && number < 600)
        {
            countP3 = countP3 + 1;
        } 
        else if (number >= 600 && number < 800) 
        {
            countP4 = countP4 + 1;
        } 
        else 
        {
            countP5 = countP5 +1;
        }
    }
    double p1, p2, p3, p4, p5;
    p1 = countP1 / n  * 100;
    p2 = countP2 / n  * 100;
    p3 = countP3 / n  * 100;
    p4 = countP4 / n  * 100;
    p5 = countP5 / n  * 100;

    cout <<"p1 = "<< p1 << "%" << endl;
    cout <<"p2 = "<< p2 << "%" << endl;
    cout <<"p3 = "<< p3 << "%" << endl;
    cout <<"p4 = "<< p4 << "%" << endl;
    cout <<"p5 = "<< p5 << "%" <<endl;
}
