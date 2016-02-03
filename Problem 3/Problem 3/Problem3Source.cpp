//Project Euler Problem 3
//Prompt: The prime factors of 13195 are 5, 7, 13 and 29.
//
//        What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <cmath>

bool checkPrime(int numberToCheck);

int main() {

	int largestPrimeFactor;
	long long currentDividend = 600851475143;

	for (int i = 2; i <= currentDividend; i++) {

		if (currentDividend % i == 0) {

			if (checkPrime(i)) {
			
				largestPrimeFactor = i;
				currentDividend /= i;

			}

		}

	}

	std::cout << "Largest prime factor is: " << largestPrimeFactor << std::endl;

	return 0;
}

//Returns true if number is found to be prime
bool checkPrime(int numberToCheck) {

	bool isPrime = true;  //Assume to be true unless proved otherwise

	for (int i = 2; i < sqrt(numberToCheck); i++) {

		if (numberToCheck % i == 0)
			isPrime = false;
		
	}

	return isPrime;

}