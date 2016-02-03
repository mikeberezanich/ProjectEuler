//Project Euler Problem 7
//Prompt: By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see 
//        that the 6th prime is 13.
//
//        What is the 10 001st prime number?

#include <iostream>
#include <cmath>

int main() {

	int numPrimes = 6;   //the current number of primes found (start at 6 because the first 6 are given)
	int currNumber = 14; //start at 14 because the last given prime is 13
	bool isPrime;

	for (; numPrimes < 10001; currNumber++) {

		isPrime = true;  //assume true unless found otherwise

		for (int j = 2; isPrime && j < sqrt(currNumber)+ 1; j++) {

			if (currNumber % j == 0)
				isPrime = false;

		}

		if (isPrime)
			numPrimes++;


	}

	std::cout << "The 10001st prime number is: " << --currNumber << std::endl;

	return 0;

}