#include <iostream>
using namespace std;

/* Function templates are defined as class templates. That way the function can
 * can receive any type and print it out. Ofcourse for some types you have to
 * overload the operators. Some people use the keyword "typename" instead of class
 * which is very normal. i.e template <typename T> works as well as template<class T>*/
template <class T>
void print(T n)
{
    cout << n << endl;
}
int main()
{
    /* In order to use the function we can specify the type we want it to handle.
     * we have here defined the function to have a string as type. */
    print<string>("Hello");
    print<int>(5);

    /* Even without specifying the type we can pass objects. For instance in the code
     * we pass in a string */
    print("Hi, How are you?");

    return 0;
}