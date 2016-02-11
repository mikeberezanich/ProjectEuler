//Problem 9
//Prompt: A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//        a^2 + b^2 = c^2
//        For example, 32 + 42 = 9 + 16 = 25 = 52.
//        There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//        Find the product abc.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a = 1, b = 1, c = 0;
	bool found = false;
	double temp;

	while (!found) {

		temp = sqrt(pow(a, 2) + pow(b, 2));
		c = int(temp);

		if (temp - c == 0) {
			if (a + b + c == 1000) {
				found = true;
				cout << "A: " << a << endl;
				cout << "B: " << b << endl;
				cout << "C: " << c << endl;
				cout << "The product is: " << a * b * c << endl;
			}
			b++;
		}

		else {
			b++;
		}

		if (b == 1000) {
			a++;
			b = 1;
		}

	}

	return 0;

}