#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> strings;
    for (int i = 0; i < 11; i++)
        strings.push_back(to_string(i));

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
        cout << *it << endl;

    return 0;
}