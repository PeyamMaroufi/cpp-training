#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class Test
{
private:
    string name;

public:
    Test(string name) : name(name) {}
    ~Test() { /* cout << "Object destroyed" << endl; */ }
    void print()
    {
        cout << name << endl;
    }
};

int main()
{
    /* FIFO */
    queue<Test> testqueue;
    testqueue.push(Test("Mike"));
    testqueue.push(Test("John"));
    testqueue.push(Test("Sue"));

    /* Eftersom Stack är fylld med objekt av typen Test då ska vi skapa en variabel av samma typ och anropar den funktion som ska printa ut information för oss */
    // Test &test1 = testStack.top();
    // test1.print();

    // testStack.pop();
    // cout << endl;

    // Test &test2 = testStack.top();
    // test2.print();
    testqueue.back().print();
    cout << endl;
    while (testqueue.size() > 0)
    {
        Test &test = testqueue.front();
        test.print();
        testqueue.pop();
    }
    return 0;
}