#include <iostream>
using namespace std;
class Test
{
    int id;
    string name;

public:
    Test() : id(0), name("") {}
    Test(int id, string name) : id(id), name(name) {}
    ~Test()
    {
        cout << "you called this function deconstructor" << endl;
    }
    void print()
    {
        cout << id << ":" << name << endl;
    }

    /* When you use the operator function then you have to declare the copy constructor too
    which is the Test(const Test &ref) */
    const Test &operator=(const Test &other)
    {
        cout << "Assignment running" << endl;
        id = other.id;
        name = other.name;
        return *this;
    }
    Test(const Test &other)
    {
        cout << "Const Test &other" << endl;
        *this = other;
    }
};

int main()
{
    Test test1(10, "Mike");
    cout << "Print test1 " << flush;
    test1.print();

    Test test2(20, "Bob");

    test2 = test1;
    cout << "Print test2 " << flush;
    test2.print();

    Test test3;
    // test3 = test2 = test1;

    test3.operator=(test2);
    cout << "Print test3 " << flush;
    test3.print();
    cout << endl;

    /* Copy Initialization. As you see the operator function did not get called.*/
    Test test4 = test1;
    test4.print();

    return 0;
}