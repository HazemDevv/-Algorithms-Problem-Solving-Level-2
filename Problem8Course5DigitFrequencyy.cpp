// Problem8Course5DigitFrequencyy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message){
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int DigitFrequencyNumber(int DigitToCheck,int Number) {
	int Remainder = 0;
	int FrequencyCount = 0;
	while (Number > 0) {
	Remainder = Number % 10;
	Number /= 10;
	//هذا الي يقارن كم مره مشى الرقم الفردي
	if (DigitToCheck == Remainder) {
	// هذا يزود (EveryTime) 
		FrequencyCount++;
	}
	}
	return FrequencyCount;
}


int main()
{
	int Number = ReadPositiveNumber("Please Enter a Positive Number ?");
	int DigitToCheck = ReadPositiveNumber("Please Enter a Frequency ?");
	cout << "Digit " << DigitToCheck << " Frequency is " <<
		DigitFrequencyNumber(DigitToCheck,Number) << " Time(s)\n";


	return 0;
}