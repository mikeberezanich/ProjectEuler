//Project Euler Problem 5
//Prompt: 2520 is the smallest number that can be divided by each of the numbers from 
//        1 to 10 without any remainder.
//
//        What is the smallest positive number that is evenly divisible by all of the 
//        numbers from 1 to 20?

#include <iostream>

int main() {

	int smallestNumber; 
	bool numberFound = false;  //whether or not the smallest number has been found
	bool hasRemainder = false; //start at false until proven otherwise

	for (int i = 2520; !numberFound; i++) {  //start at 2520 since that's given to be the smallest from 1-10

		for (int j = 7; j < 21 && !hasRemainder; j++) {  //don't need to check for 1-6 since 7-20 include multiples of them

			if (i % j != 0)
				hasRemainder = true;

		}

		if (!hasRemainder) {   //if a number has been found with no remainders for 7-20

			numberFound = true;
			smallestNumber = i;

		}

		hasRemainder = false;  //reset has remainder variable for next number

	}

	std::cout << "The smallest number is: " << smallestNumber << std::endl;

	return 0;

}