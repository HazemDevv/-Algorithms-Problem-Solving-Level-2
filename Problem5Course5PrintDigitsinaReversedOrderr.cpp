// Problem5Course5PrintDigitsinaReversedOrderr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message){
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;

	} while (Number < 0);

	return Number;
}
void isReversedOrder(int Number){
	int Remainder = 0;
	while ( Number > 0) {
		
		Remainder = Number % 10;
		Number = Number / 10;
		
		
		cout << Remainder;
		
	}

	 
}

int main()
{
	
	isReversedOrder(ReadPositiveNumber("Please Enter a Positive Number ? "));
	return 0;
}
