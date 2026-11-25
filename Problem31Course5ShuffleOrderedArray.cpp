// Problem31Course5ShuffleOrderedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPosditiveNumber(string Message){
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
//مهمته بس يغير الرقم
void Swap(int& A, int& B) {
	int Temp = 0;
	Temp = A;
	A = B;
	B = Temp;
}
int RandomNumber(int From, int To) {
	int Random = 0;
	Random = rand() % (To - From + 1) + From;

	return Random;
}
void FillaArrayWithRandomNumbers(int arr[100], int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {
		arr[i] = i + 1;
	}

}
//هذا مهمته يعطيك رقم عشوائي من الرقم المدخل  مثلا اعطاك 3 اول مره المره الجايه 2 والي بعدها اثنبني ورق عشوائي بختصار
void Shuffle(int arr[100], int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {

		Swap(arr[RandomNumber(1, arrlength) - 1], arr[(RandomNumber(1, arrlength) - 1)]);

	}
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
	int arr[100], arrlength = 0;
	arrlength = ReadPosditiveNumber("Enter The Element Number");
	
	FillaArrayWithRandomNumbers(arr, arrlength);
	cout << "Array Elements Before Shuffle: \n";
	PrintArrays(arr, arrlength);
	Shuffle(arr, arrlength);
	cout << "Array Elements After Shuffle: \n";
	PrintArrays(arr, arrlength);
	return 0;
}