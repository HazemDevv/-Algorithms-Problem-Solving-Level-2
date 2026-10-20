// Problem2Course5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum EnPrimeOrNotPrime{Prime = 1 , NotPrime = 2};

int ReadNumber(string Message){
	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);

	return Number;
}
EnPrimeOrNotPrime CheckNumber(int Number) {
	int Counter = 2;
	float M = round(Number / 2);
	for (Counter; Counter <= M; Counter++) {
		if (Number % Counter == 0)
			return EnPrimeOrNotPrime::NotPrime;
	}
	return EnPrimeOrNotPrime::Prime;
}
void PrintResult(int Num) {
	cout << "\n";  // Print a newline for better formatting.
	// Display a header indicating the range being considered.
	cout << "Prime Numbers from " << 1 << " To " << Num;
	cout << " are : " << endl;


	for (int i = 1; i <= Num; i++) {
		
			if (CheckNumber(i) == EnPrimeOrNotPrime::Prime) {
				cout << i << endl;
		}

	}

}
int main()
{


	PrintResult(ReadNumber("Please Enter a Positive Number"));
	return 0;
}
