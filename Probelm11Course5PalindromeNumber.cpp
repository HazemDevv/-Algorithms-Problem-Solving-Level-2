// Probelm11Course5PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
		// áÇÒã äÓæíåÇ ÚÔÇä áãä ÊÖÑÈå È 10 È 0 íØáÚ ÕİÑ æÇáÈÇŞí íÕíÑ Çæá ÑŞã æËÇäí Ôí áÇ ÊäÓì 
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}
bool isPalindromeNumber(int Number) {

	// íÊÇßĞ åá åá ãÊäÇÙÑå æáÇ áÇ
	return Number == ReverseNumber(Number);

}
int main()
{

	if (isPalindromeNumber(ReadPositiveNumber("Please Enter a Positive Number.?"))){
		cout << "No , it is NOT a Palindrome Number. ";
	}
	else {
		cout << "Yes , it is NOT a Palindrome Number. ";

	}



}
