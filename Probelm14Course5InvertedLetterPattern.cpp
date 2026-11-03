// Probelm14Course5InvertedLetterPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);

	return Number;
}
void PrintInvertedNumberPattern(int Number) {
	// 64 , 68
	for (int i = Number+65-1; i >= Number; i--)
	{
		// 5 -(65 + 5 - 1 = 69 - i الي تساوي 64 اذن 69-64== 5اذا 5-5 يساوي 1 بعدها يشمي بلوب الثاني
		// 4-(65 + 4 - 1 68-63 =  2<=69-63=6-5
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}

}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number? "));
	return 0;
}