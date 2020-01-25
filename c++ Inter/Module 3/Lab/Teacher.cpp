#include "Teacher.h"
#include <iostream>
Teacher::Teacher(const std::string &f_name, const std::string &l_name, const std::string &race_, int age) : Person(f_name, l_name, race_, age) {}

Teacher::Teacher() : Person("Unknown", "Unknown", "Unknown", 0) {}

Teacher::~Teacher() {}

void Teacher::OutputAge() const
{

    std::cout << "Name: " << first_name << " last name: " << last_name << " race:" << race << " and the age is: " << age << std::endl;
    Person::OutputAge();
}

void Teacher::OutputIdentity()
{
    std::cout << "You are in the outputidentity() function in Teacher class" << std ::endl;
}