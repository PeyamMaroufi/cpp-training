#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	/*Call the constructor with two argument*/
	Complex c1(2, 3);

	/*Call constructor with object reference */
	Complex c2 = c1;

	/*Call constructor with equal operator */
	c1 = c2;
	Complex c3 = c1;
	cout << c1 << " " << c3 << endl;
	return 0;
}
