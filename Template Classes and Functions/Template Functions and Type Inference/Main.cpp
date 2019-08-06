#include <iostream>
using namespace std;

template <typename T>
void print(T n)
{
    cout << "Template version: " << n << endl;
}

/* Any function can be overloaded */
void print(int value)
{
    cout << "Overloaded version: " << value << endl;
}

template <typename T>
/* Somehow we could say that in here we return a constructed type of T by
 * having () after the typename. We use these types of notation to force
 * the user to define a type to the template as for instance show<double>() */
void show()
{
    cout << T() << endl;
}

int main()
{
    /* Here we call the template version of the function and never call
     * the int version of that function */
    print<string>("Hello");
    print<int>(5);

    /* In here we don't specify the type of the template function but C++
     * call the closest function. if we had a print function that took a
     * string as argument then it would call that function. */
    print("Hello world");

    /* Following command will call the function with int as argument since
     * it is closer to the int version of print than the template version. */
    print(6);

    /* As shown when calling a function with defined type in <type> then we
     * call the template version. */
    print<>(6);

    /* Here so far we could call print function without any type using <> but
     * now we want to force the programmer or whoever to define a type */
    show<int>();
    return 0;
}