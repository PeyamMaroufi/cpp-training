#include <iostream>
#include "Student.h"
Student::Student() {}
Student::~Student() {}

void Student::setAge(int age)
{
    if (age < 5)
    {
        std::cout << "The age should be greater than 5" << std::endl;
    }
    else
    {
        this->age = age;
    }
}

int Student::getAge()
{
    return this->age;
}