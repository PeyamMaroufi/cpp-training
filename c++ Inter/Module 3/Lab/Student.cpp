#include "Student.h"
#include <iostream>

Student::Student() {}

Student::Student(const std::string &f_name, const std::string &l_name, const std::string &race_, int age): Person(f_name, l_name, race, age){}

Student::~Student() {}

void Student::OutputIdentity()
{
    Person::OutputIdentity();
    std::cout << "I am a student." << std::endl;
}
void Student::OutputAge()
{
    std::cout << "I am a student." << std::endl;
    Person::OutputAge();
}