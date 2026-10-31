// Problem12Course5InvertedNumberPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);

	return Number;
}
void PrintInvertedNumberPattern(int Number){

	for (int i = Number; i >= 1; i--) {

		for (int j = i; j <= Number;j++){
		
			cout << i;
		}

		cout << endl;
	}

}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number? "));

	return 0;
}