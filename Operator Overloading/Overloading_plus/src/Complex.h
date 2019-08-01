/*
 * Complex.h
 *
 *  Created on: Aug 1, 2019
 *      Author: maroufi
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);
	double getReal() const {
		return real;
	}
	double getImaginary() const {
		return imaginary;
	}

};

/* free function member */
ostream &operator<<(ostream &out, const Complex &c);

/* In here we don't need an referene becuase we are returning a new
 * instance of Complex. but the arguments should be const since we
 * don't want to change those argument values.
 */
Complex operator+(const Complex &c1, const Complex &c2);
#endif /* COMPLEX_H_ */
