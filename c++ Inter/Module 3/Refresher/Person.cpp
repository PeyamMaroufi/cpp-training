#include "Person.h"
#include <iostream>

Person::Person() : firstName("[Unknown name]"), age(0)
{
    std::cout << "Hello from Person::Person()" << std::endl;
}

Person::Person(const std::string &name, int age) : firstName(name), age(age)
{
    std::cout << "Hello from Person::Person(with arguments)" << std::endl;
}

void Person::displayNameAge() const
{
    std::cout << firstName << ", " << age << std::endl;
}
Person::~Person() {}