#include <iostream>
using namespace std;

/* When defining a template we need the keyword template< > and the object. I have always had class T and never typed string or int or whatever. But you can try and see if it works with strings or so. */
template <class T>
class Test
{
private:
    T obj;

public:
    Test(T obj)
    {
        this->obj = obj;
    }
    void print()
    {
        cout << obj << endl;
    }
};
int main()
{
    /* The idea is to pass a type of an object. For instance here I pass a string and the print function does whatever based on the type of the object you pass in. Since the type you specify is a string then the constructor need also a string and that's why we have the string "Hello" in there. It is actually just like declaring a vector where you just write vector <string> and in here we do the same. We have a template and upon that we call the cout function. As you see since the type was a string we could actually print the content. */
    Test<string> test1("Hello");
    test1.print();
    return 0;
}