// Course5P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum EnPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

int ReadNumber(string Message){

	int Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	}while(0 > Number);
	
	return Number;
}

EnPrimeOrNotPrime CheckNumber(int Number) {
	int Counter = 2;
	int M = round(Number) / 2;
	for (Counter; Counter < M; Counter++) {
		if (Number % Counter == 0)
			return EnPrimeOrNotPrime::NotPrime;
	}
	return EnPrimeOrNotPrime::Prime;

} 
void PrintResult(int Number) {
	for (int i = 1; i <= Number; i++) {

		if (CheckNumber(i) == EnPrimeOrNotPrime::NotPrime) {
			cout << i << endl;

		}
	}
    }
int main()
{
	PrintResult(ReadNumber("Please Enter a Postive Number: "));

	return 0;
}
