#include "Student.h"
#include <iostream>
Student::Student() : course("C++") {}
Student::~Student() {}
void Student::display() const
{
    std::cout << "The display function is overriden. This is Student class. " << course << std::endl;
}