// Problem17Course5Guessa3-LetterPassword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string ReadPassword(){
	string Password;
 	cout << "Please Enter a 3-Letters Password (all Captial)\n";
	cin >> Password;

	return Password;
}
bool GuessPassword(string OrginalPassWord) {
	string Word = " ";
	int counter = 0;
	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int k = 65; k <= 90; k++) {
				Word += char(i);
				Word += char(j);
				Word += char(k);
				counter++;
				cout << "Trial [" << counter << "] :" << Word << "\n";

				if (Word == OrginalPassWord) {
					cout << "Password is " << Word
						<< "\n Found after "
						<< counter << " Trial(s)";
					return true;
				}
				Word = "";
			}
		}
	}
		

	
	return false;
}
int main()
{
	GuessPassword(ReadPassword());

	return 0;
}
