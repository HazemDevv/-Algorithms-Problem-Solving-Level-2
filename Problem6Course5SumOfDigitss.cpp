// Problem6Course5SumOfDigitss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Initialize a variable to store the user's input.

    // Use a do-while loop to ensure the prompt is displayed at least once.
    do
    {
        cout << Message << endl; // Display the prompt message to the user.
        cin >> Number;           // Read the user's input.
    } while (Number <= 0);       // Repeat if the entered number is not positive (<= 0).

    return Number;  // Return the valid positive number.
}
int PrintSumDigits(int Number) {
    int Sum = 0 , Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
        
    }
    return Sum;
}
int main()
{

    cout << "Sum Of Digits = " 
    << PrintSumDigits(ReadPositiveNumber("Please Enter a Positive Number "));
    return 0;
}
