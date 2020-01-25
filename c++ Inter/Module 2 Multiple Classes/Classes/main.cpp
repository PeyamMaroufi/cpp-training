#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    /* We ask the OS to allocate enough memory to have a Person class */
    /* We have not yet created any instance of that object. We only have */
    /* Os to save some space */
    Person *pOne = new Person();

    Person *pTwo = new Person("Tom", "Thump");

    Person *pThere = new Person("Tom", "tump", 15);

    pOne->SayHello();
    pTwo->SayHello();
    pThere->SayHello();

    return 0;
}