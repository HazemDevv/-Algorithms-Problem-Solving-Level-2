// Problem26Course5SumOfRandomArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {
	int Random = 0;
	Random = rand() % (To - From + 1) + From;

	return Random;
}
void FillaArrayWithRandomNumbers(int arr[100], int& arrlength) {

	cout << "Please enter To array \n";
	cin >> arrlength;
	for (int i = 0; i <= arrlength - 1; i++) {
		arr[i] = RandomNumber(1, 100);
	}

}
void PrintArrays(int arr[100], int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";
}
int SumNumberInArray(int arr[100], int arrlength) {


	int Sum = 0;

	for (int i = 0; i <= arrlength - 1; i++) {

	
			Sum += arr[i];
		

	}
	return Sum/arrlength;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillaArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements : ";
	PrintArrays(arr, arrLength);
	cout << "\nSum of all Number is : " << SumNumberInArray(arr, arrLength) << endl;

	return 0;
}