// Problem25Course5MinOfRamdomArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int MinNumberInArray(int arr[100], int arrlength) {


	int Min = 0;
	Min = arr[0];
	for (int i = 0;i <= arrlength - 1; i++) {
	
		if (Min > arr[i]) {
			Min = arr[i];
		}

	}
	return Min;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillaArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements : ";
	PrintArrays(arr, arrLength);
	cout << "\nMin Number is : " << MinNumberInArray(arr, arrLength) << endl;

	return 0;
}
