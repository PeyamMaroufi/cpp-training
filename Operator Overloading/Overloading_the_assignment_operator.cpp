#include <iostream>
using namespace std;
class Test
{
    int id;
    string name;

public:
    Test() : id(0), name("") {}
    Test(int id, string name) : id(id), name(name) {}
    void print()
    {
        cout << id << ":" << name << endl;
    }
};

int main()
{
    Test test1(10, "Mike");
    test1.print();

    Test test2(20, "Bob");

    return 0;
}