#include "Student.h"
#include <iostream>
using namespace std;
void demoFunction(Person *ptr);
void demoFunction2(Person &ref);


int main()
{
    Person *p = new Student("Payam Maroufi", 18, "Physics");
    p->display();
    demoFunction(p);
    demoFunction2(*p);

    delete p;
}
void demoFunction(Person *ptr)
{
    ptr->display();
}
void demoFunction2(Person &ref)
{
    ref.display();
}
