#include <iostream>
using namespace std;

/*  We can also use this as a class and let the next struc derive from it */
struct Test
{
	virtual bool operator()(string &test) = 0;
	virtual ~Test() {}
};

/* Lets use a struct because all the memebers are by default public. in class the members are
 * by default private. It is actually a "class" with public members and functions.*/
struct MatchTest : public Test
{
	/* we are overloading the () */
	bool operator()(string &text)
	{
		return text == "lion";
	}
};

void check(string text, Test &test)
{
	if (test(text))
	{
		cout << "Text matches" << endl;
	}
	else
	{
		cout << "No match" << endl;
	}
}
int main()
{
	MatchTest pred;
	/* Since we have a reference as in argument then we use a separate variable for the string. */
	string value = "lion";
	/* So here we are actually doing the () operator */
	cout << pred(value) << endl;

	MatchTest m;
	check("lion", m);
	return 0;
}