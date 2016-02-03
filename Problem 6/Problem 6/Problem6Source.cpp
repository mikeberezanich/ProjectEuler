//Project Euler Problem 6
//Prompt: The sum of the squares of the first ten natural numbers is,
//
//        12 + 22 + ... + 102 = 385
//
//        The square of the sum of the first ten natural numbers is,
//
//        (1 + 2 + ... + 10)2 = 552 = 3025
//
//        Hence the difference between the sum of the squares of the first ten natural 
//        numbers and the square of the sum is 3025 ? 385 = 2640.
//
//        Find the difference between the sum of the squares of the first one hundred
//        natural numbers and the square of the sum.
#include <iostream>
#include <cmath>

int sumOfSquares(int upToNumber);
int squareOfSums(int upToNumber);

int main() {

	int difference = 0;

	difference = squareOfSums(100) - sumOfSquares(100);

	std::cout << "The difference is: " << difference << std::endl;

	return 0;

}

//Finds the sum of squares up to the number passed
int sumOfSquares(int upToNumber) {

	int sum = 0;

	for (int i = 1; i <= upToNumber; i++) {

		sum += pow(i, 2);

	}

	return sum;

}

//Finds the square of the sums up to the number passed
int squareOfSums(int upToNumber) {

	int sum = 0;

	for (int i = 1; i <= upToNumber; i++) {

		sum += i;

	}

	return pow(sum, 2);

}