// Problem30Course5SumOf2ArraysToaThirdOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;
// بس يقرا
int ReadNumberPositive(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int RandomNumber(int From, int To) {
	int Random = 0;
	Random = rand() % (To - From + 1) + From;

	return Random;
}
void FillaArrayWithRandomNumbers(int arr[100], int arrlength) {

	//صارت مهمتها بس يسوي راندوم نمبر
	for (int i = 0; i <= arrlength - 1; i++) {
		arr[i] = RandomNumber(1, 100);
	}

}
// مهمته بس يجمع لك
void SumOf2Array(int arr[100],int arr2[100],int arrSum[100], int arrlength){

	for (int i = 0; i < arrlength; i++) {
		arrSum[i] = arr[i] + arr2[i];
	}

}
//مهمته بس يطبع لك
void PrintArray(int arr[100], int arrlength){

	for (int i = 0; i < arrlength; i++) {
		cout << arr[i] << " ";
	}

}
int main()
{
	int arr[100], arr2[100], arrSum[100], arrlength = 0;
	arrlength = ReadNumberPositive("Please Enter a Positive Number");
	FillaArrayWithRandomNumbers(arr, arrlength);
	FillaArrayWithRandomNumbers(arr2, arrlength);
	SumOf2Array(arr, arr2, arrSum, arrlength);
	cout << "Array 1 Elements: \n";
	PrintArray(arr, arrlength);
	cout << "\nArray 2 Elements: \n";
	PrintArray(arr2, arrlength);
	cout << "\n\nSum Of array1 And array2 Elements: \n";
	
	PrintArray(arrSum, arrlength);
    return 0;
}
