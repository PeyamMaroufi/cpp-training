#include <iostream>
#include <set>
using namespace std;
class Test
{
    int id;
    string name;

public:
    Test() : id(0), name("") {}
    Test(int id, string name) : id(id), name(name) {}
    void print() const
    {
        cout << id << ":" << name << endl;
    }

    bool operator<(const Test &other) const
    {
        return name < other.name;
    }
};

int main()
{
    /* ser saves everything in order */
    set<int> numbers;
    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(40);
    numbers.insert(40);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    set<int>::iterator itFind = numbers.find(130);
    /* Find the element as long as you are not at the end of the set */
    if (itFind != numbers.end())
    {
        cout << "Found: " << *itFind << endl;
    }

    /* Följande visar om det finns en 30a i set eller inte. Den räknar inte något. Den ger noll om det int finns eller en etta om det finns */
    if (numbers.count(30))
    {
        cout << "Number found. " << endl;
    }
    set<Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(15, "Joe"));
    tests.insert(Test(20, "Sue"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
        it->print();
    }

    return 0;
}