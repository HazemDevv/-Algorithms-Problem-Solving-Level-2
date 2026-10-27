// Problem9Course5DigitFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int CountDigitFrequency(short DigitToCheck, int Number) {
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

void PrintAllDigitFrequency(int Number){

	for (int i = 0; i <= 10; i++) {
		short	DigitFrequency = 0;
		//تقرا الرقم وايضا المكرر
		DigitFrequency =  CountDigitFrequency(i, Number);
		//هل الرقم المدخل من الرقم المقروء اكبر من صفر لو ايه يدخل ويطبع المكرر والرقم
		if (DigitFrequency > 0) {
			cout << "Digit " << i << " Frequency is "
			<< DigitFrequency << " Time(s).";
			cout << "\n";
		}

}

}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Positive Number ?");
	PrintAllDigitFrequency(Number);


	return 0;
}