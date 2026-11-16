// Problem23Course5FllArrayWithRandomNumbersFrom1to100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdalign>

using namespace std;

int RandomNumber(int From, int To) {
	int RandomNum = 0;
	RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;

}
void FillaArrayWithRandomNumbers(int arr[100],int &arrlength) {
	cout << "Please Enter to arrays ? \n";
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++) {
       arr[i] = RandomNumber(1,100);
       cout << arr[i] << " ";
        // 1 = 20,2= 29 ,3 = 93
    }
   
}
void PrintArray(int arr[100], int arrlength){

    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << " ";
        //هنا مرحله الطباعه
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLentgth = 0;
    FillaArrayWithRandomNumbers(arr, arrLentgth);
    cout << "Array Elements: ";
    //PrintArray(arr, arrLentgth);
    
	return 0;
}
