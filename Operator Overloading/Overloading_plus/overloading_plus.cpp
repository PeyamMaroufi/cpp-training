/*
 * overloading_plus.cpp
 *
 *  Created on: Aug 2, 2019
 *      Author: maroufi
 */
#include <iostream>
#include "Complex.h"
using namespace std;
int main() {
	Complex c1(3, 4);
	Complex c2(2, 3);

	/* Calling the left shift operator */
	cout << c1 << endl;
	cout << c2 << endl;

	/* Calling the overloaded plus operator */
	cout << c1 + c2 << endl;

	/* Every plus operation should work*/
	Complex c3 = c1 + c2;
	cout << c3 << endl;
	cout << c1 + c2 + c3 << endl;

	/* Adding a real number to a imaginary number*/
	Complex c4(4,2);
	Complex c5 = c4 +7;
	cout << c5 << endl;

	/* A double on the write side */
	cout << 3.2 + c5 << endl;
	return 0;

}
