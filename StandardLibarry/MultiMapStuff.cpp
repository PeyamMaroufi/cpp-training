#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, string> lookup;
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Roj"));
    lookup.insert(make_pair(20, "Bob"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }

    cout << endl;

    for (multimap<int, string>::iterator it = lookup.find(20); it != lookup.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }
    cout << endl;

    /* Detta hittar element som är lika med 20 */
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(20);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
    {
        cout << it->first << ":" << it->second << endl;
    }

    /* Följande är använd i c++11 som gör det enklare med c++11. Ovan code är c++98 */
    auto its_new = lookup.equal_range(20);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
    {
        cout << it->first << ":" << it->second << endl;
    }
}