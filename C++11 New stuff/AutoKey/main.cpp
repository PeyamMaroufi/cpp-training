#include <iostream>
using namespace std;

/* Auto function returning an instance type. The type can be identified using decltype.  */
template <class T, class S>
auto test(T value, S value2) -> decltype(value + value2)
{
	return value + value2;
}

auto get() -> int
{
	return 999;
}

auto test2() -> decltype(get())
{
	return get();
}

int main()
{
	/*  A more C# like thing. in C# you write var . in here it does it with auto keyword */
	auto value = 7;
	auto text = "Hello";

	cout << value << endl;
	cout << text << endl;
	cout << test(5, 6) << endl;

	cout << test2() << endl;
	return 0;
}