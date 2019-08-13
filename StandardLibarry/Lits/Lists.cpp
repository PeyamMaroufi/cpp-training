#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;

    list<int>::iterator eraseit = numbers.begin();
    eraseit++;
    /* Om vi inte har följande deklarationen så kommer addressen ändå fortsätta att visas. Erase commandot gör det invalid men det visas ändå.  */
    eraseit = numbers.erase(eraseit);
    cout << "Element: " << *eraseit << endl;

    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); )
    {
        if (*it == 2)
        {
            numbers.insert(it, 1234);
        }
        if (*it == 1)
        {
            it = numbers.erase(it);
        }
        else
        {
            it++;
        }
    }

    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}