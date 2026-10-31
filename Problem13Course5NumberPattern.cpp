// Problem13Course5NumberPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintInvertedNumberPattern(int Number) {
	int Counter = 1;
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		Counter++;
		cout << endl;
	}

}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number? "));
	return 0;
}