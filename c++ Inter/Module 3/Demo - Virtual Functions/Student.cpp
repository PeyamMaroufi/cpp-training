#include "Student.h"
#include <iostream>

Student::Student() : course("Unknown Course") {}
Student::Student(const std::string &name, int age, const std::string &course) : Person(name, age), course(course) {}

void Student::display() const
{
    Person::display();
    std::cout << "course: " << course << std::endl;
}

Student::~Student()
{
    std::cout << "Good bye from the Student destructor" << std::endl;
}