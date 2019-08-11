#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test)
{
	return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(string test))
{
	int totally = 0;
	for (int i = 0; i < texts.size(); i++)
	{
		if (match(texts[i]))
		{
			totally++;
		}
	}
	return totally;
}
int main()
{
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	/* Following loops through the vector and sees how many of the strings
	 * inside the vector returning true in match */
	cout << count_if(texts.begin(), texts.end(), match) << endl;

	/* For makin your own version of count_if do as following.
	 * Actually as you see we pass in the vector and the function name
	 * as parametheres. match here is the function defined before and
	 * we send in the reference of it. and as we saw the in the earliers
	 * example a function represents it reference and we do not need to have
	 * a & sign.*/
	cout << countStrings(texts, match) << endl;
	return 0;
}