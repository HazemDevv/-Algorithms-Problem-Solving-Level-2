// Problem32Course5CopyArrayInReverseOrder'.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPosditiveNumber(string Message) {
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
void FillaArrayWithRandomNumbers(int arrSource[100], int &arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {
		arrSource[i] = RandomNumber(1,100);
	}

}
void PrintArrays(int arrSource[100], int arrlength) {

	for (int i = 0; i <= arrlength - 1; i++) {

		cout << arrSource[i] << " ";
	}
	cout << "\n";
}
void CopyReverseOrder(int arrSource[100],int arrDicition[100] , int arrlength) {
	 /*íÈÏÇ ãä ÇÎÑ ÑÞã Çáí åæ 5 æÊäÞÕ 0 - 1 æÊÈÏÇ Çáíä ãÇ ÇäÏ
	 {50,30,29,18,19}
	 arrlength = 5;
	 i = 0
	 arr2 [5-i-1]= index =4 =  19 
	  i = 1
	 arr2 [4-i-1]= index = 3 = 18
	 i = 2
	 arr2 [5-i-1]= index = 2 = 29 
	  arrlength = 5;
	 i = 3
	 arr2 [5-i-1]= index = 1 = 30
	 i = 4
	 arr2 [5-i-1]= index = 0 = 50
	 19 18 29 30 50
	 */ 
	for (int i = 0; i <= arrlength - 1; i++) {
		arrDicition[i] = arrSource[arrlength-i-1];
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength = 0,arr2[100];
	arrlength = ReadPosditiveNumber("Enter The Element Number");
	FillaArrayWithRandomNumbers(arr, arrlength);
	cout << "Array 1 Elements: \n";
	PrintArrays(arr, arrlength);
	cout << "\nArray 2 Elements After Copying array1 in Reversed Order: \n";
	CopyReverseOrder(arr, arr2, arrlength);
	PrintArrays(arr2, arrlength);
	cout << endl;

	
	return 0;
}