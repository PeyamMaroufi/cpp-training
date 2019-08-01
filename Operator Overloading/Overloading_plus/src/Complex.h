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

/* If you want to add a real number without any imaginary part then
 * you can redeclare the function according to following. We don't
 * use a reference because it is just about a few bytes.
 */
Complex operator+(const Complex &c1, double d);

/* In above function you see that the first argument is Complex object
 * while the second one is double. But what if user want the first one
 * double and second one Complex class? Then we have to redeclare the
 * function
 */
Complex operator+(double d, const Complex &c1);

#endif /* COMPLEX_H_ */
