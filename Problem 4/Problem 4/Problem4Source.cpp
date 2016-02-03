//Project Euler Problem 4
//Prompt: A palindromic number reads the same both ways. The largest palindrome made from 
//        the product of two 2-digit numbers is 9009 = 91 × 99.
//
//        Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>

bool checkForPalindrome(int number);

int main() {

	int largestPalindrome = 0;
	int currentProduct = 0;

	for (int i = 100; i < 1000; i++) {

		for (int j = 100; j < 1000; j++) {

			currentProduct = i * j;

			if (checkForPalindrome(currentProduct)) {

				if (currentProduct > largestPalindrome)
					largestPalindrome = currentProduct;

			}

		}

	}

	std::cout << "The largest palindrome is: " << largestPalindrome << std::endl;

	return 0;

}

//Checks if the number passed is a palindrome
bool checkForPalindrome(int number) {

	bool isPalindrome = true;  //assume it's true unless found otherwise
	std::string numberString = std::to_string(number);
	int i = 0;
	int j = numberString.length() - 1;

	for (; isPalindrome && i < numberString.length() / 2; i++, j--) {

		if (numberString.at(i) != numberString.at(j))
			isPalindrome = false;

	}

	return isPalindrome;

}