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

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal() + c2.getReal(),
			c1.getImaginary() + c2.getImaginary());
}
Complex operator+(const Complex &c1, double d) {
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex operator+(double d, const Complex &c1) {
	return Complex(c1.getReal() + d, c1.getImaginary());
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
