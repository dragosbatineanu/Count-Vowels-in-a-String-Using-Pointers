#include <iostream>
#include "Header.h"


int main() {
	char string[100];


	std::cout << "Enter a string:" << "\n";
	std::cin.getline(string,100);

	int vowelCount = countVowels(string);

	std::cout << "The number of vowels in the string is:" << " " << vowelCount << "\n";

	return 0;
}