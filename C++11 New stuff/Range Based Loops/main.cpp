#include <iostream>
#include <vector>
using namespace std;
int main()
{
	/* Auto will save us time by not even having the bracets any more */
	auto texts = {"one", "two", "three"};

	/* Introduced in C++ 11 where you don't need to have int i = 0; and stuff.
	 * It is like in Python where  you write "for x in y" which is very time saving */
	for (auto text : texts)
	{
		cout << text << endl;
	}

	/* Works even with other types. */
	vector<int> members;
	members.push_back(5);
	members.push_back(1);
	members.push_back(4);
	members.push_back(2);
	members.push_back(6);

	for (auto number : members)
	{
		cout << number << endl;
	}

	cout << endl;

	/* Print out all the chars */
	string hello = "Hello";
	for (auto c : hello)
	{
		cout << c << endl;
	}
	return 0;
}