// Problem16Course5AllWordsFromAAToZZZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
using namespace std;

void PrintAllFromAAAToZZZ() {
    string word = "";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++)
            {
                // Append the current letter for the first position.
                word += char(i);
                // Append the current letter for the second position.
                word += char(j);
                // Append the current letter for the third position.
                word += char(k);

                // Output the constructed three-letter word.
                cout << word << endl;
                word = "";
            }
        }
        // After completing combinations for the current first letter, print a separator line.
        cout << "\n____________________________\n";
    }
}



int main()
{
	PrintAllFromAAAToZZZ();
	return 0;
}
