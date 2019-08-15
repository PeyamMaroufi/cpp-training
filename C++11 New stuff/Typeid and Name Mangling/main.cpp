#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	string value;

	/* C++ specific */
	decltype(value) name = "Payam";

	/*  Shows the typ of the variable  */
	cout << typeid(value).name() << endl;
	cout << name << endl;

	return 0;
}