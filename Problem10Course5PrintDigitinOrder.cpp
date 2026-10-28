// Problem10Course5PrintDigitinOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int ReverseNumber(int Number) {
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) {
		// 4
		Remainder = Number % 10;
		Number /= 10;
		// لازم نسويها عشان لمن تضربه ب 10 ب 0 يطلع صفر والباقي يصير اول رقم وثاني شي لا تنسى 
		Number2 = Number2 * 10 + Remainder;
		
	}
	return Number2;
}

void PrintDigit(int Number) {
	int Remainder = 0;

	
	while (Number > 0) {
		// 4
		Remainder = Number % 10;
		Number /= 10;
		
		cout << Remainder << "\n";

	}
	
}

int main()
{
	PrintDigit(ReverseNumber(ReadPositiveNumber("Please Enter Your Positive Number")));
	return 0;
}
