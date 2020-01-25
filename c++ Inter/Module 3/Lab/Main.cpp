#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;
int main()
{
    Person *s = new Student("Payam", "Maroufi", "Iranian", 32);
    s->OutputIdentity();
    s->OutputAge();

    Person *s1 = new Teacher("Arash", "Rad", "Iranian", 33);
    s1->OutputAge();
    s1->OutputIdentity();
    delete s, s1;

    return 0;
}