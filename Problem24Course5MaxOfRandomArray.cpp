// Problem24Course5MaxOfRandomArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int RandomNumber(int From,int To){
	int Random = 0;
	Random = rand() % (To - From + 1) + From;

	return Random;
}
void FillaArrayWithRandomNumbers(int arr[100], int& arrlength) {

	cout << "Please enter To array \n";
	cin >> arrlength;
	for (int i = 0; i <= arrlength - 1; i++) {
		arr[i] = RandomNumber(1,100);
	}

}
void PrintArrays(int arr[100], int arrlength){

	for (int i = 0; i <= arrlength - 1; i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";
}
int MaxNumber(int arr[100], int arrlength){


	int Max = 0;
	for (int i = 0; i <= arrlength - 1; i++) {
		if (Max > arr[i]) {// 10 > 12, 12 > 29 , 29 > 13 , 29 > 99 , 99 > 78 , 99 > 88 Random
			Max = arr[i];//كل مره يسجل قيمة الين مايحصل البيق بوس
	}
		
	}
	return Max;
}
int main()
{
	int arr[100], arrLength;
	FillaArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements : ";
	PrintArrays(arr, arrLength);
	cout << "\nMax Number is : " << MaxNumber(arr, arrLength) << endl;

	return 0;
}
