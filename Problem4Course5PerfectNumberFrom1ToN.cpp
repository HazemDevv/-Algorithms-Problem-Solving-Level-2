// Problem4Course5PerfectNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool CheckPerfect(int Number){
	int Sum = 0;
	for (int i = 1; i < Number; i++) {

		if (Number % i == 0) {
			Sum += i;
		}

	}

	return Number == Sum;
}

void PrintPerfect(int Number) {

	for (int i = 1; i < Number; i++) {

		if (CheckPerfect(i)) {
			cout << i << "\n";
		}

	}

}

int main()
{

	PrintPerfect(ReadPositiveNumber("Please Enter a Positive Number"));

	return 0;
}
