#include <iostream>
#include "Student.h"
#include "Person.h"
int main()
{

    Person *student_pointer = new Student;
    student_pointer->display();

    Student s1;
    Person &p = s1;
    p.display();
    return 0;
}