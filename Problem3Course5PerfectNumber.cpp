// Problem3Course5PerfectNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
bool CheckPerfectNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i <= Number; i++) {
		if (Number % i == 0) {
			Sum += i;
		}
	}

	return Number == Sum;
}
void PrintResult(int Number) {

	if(CheckPerfectNumber(Number)){
	cout << Number << " is Perfect ";

	}
	else {

		cout << Number << " is Not Perfect ";
	
	}

}
int main()
{

	PrintResult(ReadNumber("Please Enter a Positive Number "));

	return 0;
}