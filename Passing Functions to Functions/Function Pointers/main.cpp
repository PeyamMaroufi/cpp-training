#include <iostream>
using namespace std;

void test()
{
	cout << "Hello " << endl;
}
void test_second(int value, string myString) { cout << "This is the second method" << endl; }

int main()
{
	/* How c++ is calling function is by referencing and dereferencing the function. */
	test();

	/* Declaring a pointer to the function. The return typ is a pointer of type void
	 * and since we don't have any arguments then we use an empty paranteces. The pointer
	 * star needs to be between two paranthesis with the name of that pointer as seen below.  */
	void (*pTest)();

	/* Now we need to point that pointer to the function. Here we don't need any paranthesis */
	pTest = &test;

	/* Calling the function pointer. But how do we know that the function we calling, does not
	 * return a int or somethong. well for the first the it is a void but for beeing on the good
	 * side we need to have parathesis as before*/
	(*pTest)();

	/* However, the name of a function is actually the pointer to that function. so in line 19 the
	 * & sign is redundend and we could just have pTest = test; as below and it still works. And we
	 * don't even need the second star * because we can just call the function like it wasn't an
	 * intentional call to function and it still works.*/
	void (*pTest2)();
	pTest2 = test;
	pTest2();

	/* What is the function has a argument. Simple: */
	void (*pVoid)(int, string) = test_second;
	pVoid(8, "Mystuff");
	return 0;
}