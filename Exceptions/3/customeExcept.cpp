#include <iostream>
#include <exception>

using namespace std;

/* Overriding the default function of what in exception */
class MyException : public exception
{
public:
    virtual const char *what() const throw()
    {
        return "Somethign bad happened!";
    }
};

class Test{
    public:
    void goesWrong(){
        throw MyException();
    }
};

int main()
{
    Test test;
    try{
        test.goesWrong();
    }
    catch(MyException &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}