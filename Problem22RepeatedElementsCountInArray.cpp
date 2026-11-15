// Problem22RepeatedElementsCountInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
	int Number = 0;
	do {

		cout << Message << "\n";
		cin >> Number;

	} while (Number < 0);

	return Number;
}

void ReadArray(int arr[100],int &arrLentgh) {
	cout << "Enter Number of Elements \n";
	cin >> arrLentgh;
	cout << "\nEnter array elements: \n";
	for (int i = 0; i  < arrLentgh;i++){
	
		cout << "element [" << i + 1 << "] : " << "\n";
		cin >> arr[i];
		//Read Only
	}
	
}
void PrintArray(int arr[100], int arrLentgh){
	for (int i = 0; i < arrLentgh; i++)
		cout << arr[i] << " ";
	// Print Only
}
int TimesRepeated(int Number, int arr[100],int arrLentgh) {
	
	int Counter = 0;
	
	for (int i = 0; i < arrLentgh - 1; i++){
		if (Number == arr[i]) {
			Counter++;

		}
	}
	return Counter;
}

int main()
{
	int NumberToCheck = 0;
		int arr[100];
	int arrlength = 0;
    
	ReadArray(arr, arrlength);
	NumberToCheck = ReadPositiveNumber("Enter The Number You Want To Check : ");
	cout << "Orginal array : ";
	PrintArray(arr, arrlength);
	cout << "\n";
	cout << NumberToCheck << " is repected "
		<< TimesRepeated(NumberToCheck, arr, arrlength) << " time(s)" << endl;
	return 0;
}
