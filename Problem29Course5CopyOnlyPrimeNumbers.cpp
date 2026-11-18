// Problem29Course5CopyOnlyPrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
enum EnPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

int RandomNumber(int From, int To) {
	int Random = 0;
	Random = rand() % (To - From + 1) + From;

	return Random;
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
void FillaArrayWithRandomNumbers(int arr[100], int& arrlength) {

	cout << "Please enter To array \n";
	cin >> arrlength;
	for (int i = 0; i <= arrlength - 1; i++) {
		arr[i] = RandomNumber(1, 100);
	}

}
void CopyArrayPrime(int arrSource[100], int arrDesinotion[100], int arrlength,int &arr2length){
	//Because Only Prime Number
	int Counter = 0;
	for (int i = 0; i < arrlength; i++) {
		//فقط يتحقق اولي ولا لا
		if (CheckNumber(arrSource[i]) == EnPrimeOrNotPrime::Prime) {
			/*هنا بس تطبع الDestianationمن المصدر الاساسي يعني بس
			البرايم وكلونتر بس يشوف كم عدد البرايم ولازم
			بعدين تنقص واحد عشان يكون دقيق
			*/
			arrDesinotion[Counter] = arrSource[i];
			Counter++;
		}
	}
	//هذا بختصار يسجل كم عدد الArray الي تكرر ب البرايم نمبر
	//
	arr2length = Counter;
}
void PrintArrays(int arr[100], int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";
}
int main()
{
	srand((unsigned)time(NULL));
	int arrlength = 0,arrlength2 = 0;
	int arr1[100], arr2[100];
	FillaArrayWithRandomNumbers(arr1, arrlength);
	cout << "Array 1 Elements : \n";
	CopyArrayPrime(arr1, arr2, arrlength,arrlength2);
	PrintArrays(arr1, arrlength);
	cout << "\nPrime Numbers in Arrays2 : \n";
	PrintArrays(arr2, arrlength2);
	cout << endl;
	return 0;
}