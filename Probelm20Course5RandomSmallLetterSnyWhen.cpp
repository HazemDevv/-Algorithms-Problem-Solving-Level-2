// Probelm20Course5RandomSmallLetterSnyWhen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;
 
int RandomNumber(int From ,int To){
	int RandomNum = 0;
	RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}
enum EnCharType { SmallLetter = 1, CapitalLetter = 2, SpecailCharacter = 3, Digit = 4};

char GetRandomCharacter(EnCharType CharType) {

	switch (CharType) {
	case:: EnCharType::SmallLetter:
		return char(RandomNumber(97, 122));
	case::EnCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case::EnCharType::SpecailCharacter:
		return char(RandomNumber(32, 47));
	case::EnCharType::Digit:
		return char(RandomNumber(48, 57));
	}

}
int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(EnCharType::SmallLetter) << "\n";
	cout << GetRandomCharacter(EnCharType::CapitalLetter) << "\n";
	cout << GetRandomCharacter(EnCharType::SpecailCharacter) << "\n";
	cout << GetRandomCharacter(EnCharType::Digit)  << endl;

	return 0;
}
