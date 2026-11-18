
// Problem28CopyArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintArrays(int arr[100],int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";
}
void PrintArrayCopy(int arr[100],int arrSource[100],int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {
		arrSource[i] = arr[i];
	}
	cout << "\n";
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100],arr2[100], arrlength;
	FillaArrayWithRandomNumbers(arr1, arrlength);
	PrintArrayCopy(arr1,arr2,arrlength);
	cout << "Array 1 Elements : " << "\n";
	PrintArrays(arr1, arrlength);
	cout << "\nArray 2 Elements After Copy : " << "\n";
	PrintArrays(arr2, arrlength);
	cout << endl;
	return 0;
}