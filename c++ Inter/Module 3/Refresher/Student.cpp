#include "Student.h"
#include <iostream>

Student::Student() : course("[Course unknown]")
{
    std::cout << "Hello from Studen() without arguments" << std::endl;
}

Student::Student(const std::string &name, int age, const std::string &course) : Person(name, age), course(course)
{
    std::cout << "Hello from Student constructor with arguments" << std::endl;
}

Student::~Student() {}

void Student::displayCourse() const
{
    std::cout << course << std::endl;
}