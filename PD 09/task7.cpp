#include <iostream>
#include <string>
using namespace std;
void commonCharacter(string string1, string string2) ;

int main() {
    string string1, string2;
    cout << "Enter the first string: ";
    cin >> string1;
    cout << "Enter the second string: ";
    cin >> string2;
    commonCharacter(string1, string2);

    return 0;
}
void commonCharacter(string string1, string string2)
 {
    int totalCount = 0;
    int length1 = string1.length();
    int specificCounts[length1] = {0};

    for (int i = 0; i < length1; i++) 
    {
        for (int j = 0; j < string2.length(); j++)
        {
            if (string1[i] == string2[j])
            {  
                totalCount++;
                specificCounts[i]++;
                string2[j] = ' ';
                break; 
            }
        }
    }

    cout << "Total common characters: " << totalCount << endl;
    cout << "Specific counts for each character in string1:" << endl;
    for (int i = 0; i < length1; i++) {
        cout << "Character '" << string1[i] << "' count: " << specificCounts[i] << endl;
    }
}