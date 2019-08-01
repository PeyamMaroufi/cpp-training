/*
 * Complex.cpp
 *
 *  Created on: Aug 1, 2019
 *      Author: maroufi
 */

#include "Complex.h"
ostream &operator<<(ostream &out, const Complex &c) {
	out << "(" << c.getReal() << ", " << c.getImaginary() << ")";
	return out;
}
Complex::Complex() {
	real = 0;
	imaginary = 0;
}
Complex::Complex(double real, double imaginary) :
		real(real), imaginary(imaginary) {
	cout << "Constructor with two arguments" << endl;
}
Complex::Complex(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
	cout << "Constructor with Complex instance reference" << endl;
}
const Complex &Complex::operator =(const Complex &other) {
	cout << "Constructor with Complex equal operator reference" << endl;
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}
