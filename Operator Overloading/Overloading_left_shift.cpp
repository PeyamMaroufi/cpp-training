#include <iostream>
using namespace std;
class Test
{
private:
    int id;
    string name;

public:
    /* Default constructor */
    Test() : id(0), name("") {}
    /* Parametrized constructor */
    Test(int id, string name) : id(id), name(name) {}

    void print()
    {
        cout << id << ": " << name << endl;
    }

    /* Override operator */
    const Test &operator=(const Test &other)
    {
        id = other.id;
        name = other.name;
        return *this;
    }

    /* Copy constructor */
    Test(const Test &other)
    {
        *this = other;
    }

    friend ostream &operator<<(ostream &out, const Test &test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test test1(10, "Mike");
    Test test2(20, "Bob");

    /* The left shit operator looks at left first and run the left stuff first.
    In this example the first left shit has two arguments 1. cout 2. test1. these
    will go to the ostream &operator<< function in the class. for the second left
    shift the first argument is the cout from (cout << test1) and the second argument
    is test2. cout << test1 returns a a ostream object that we again use as an argument. */
    cout << test1 << test2 << endl;

    return 0;
}