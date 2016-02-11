//Project Euler Problem 10
//Prompt: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//        Find the sum of all the primes below two million.

#include <iostream>

int main() {

	long long sumOfPrimes = 2; //start at 2 because we know 2 is a prime
	bool isPrime;

	for (int i = 3; i < 2000000; i++) {

		isPrime = true;  //assume true unless found otherwise

		for (int j = 2; isPrime && j < sqrt(i) + 1; j++) {
			
			if (i % j == 0)
				isPrime = false;

		}

		if (isPrime)
			sumOfPrimes += i;

	}

	std::cout << "The sum of primes is: " << sumOfPrimes << std::endl;

	return 0;

}