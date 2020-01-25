#include "Person.h"
#include <iostream>
Person::Person() {}

Person::Person(std::string const &fName, std::string const &lName) : firstName(fName), lastName(lName), age(0) {}

Person::Person(std::string const &fName, std::string const &lName, int const &age) : firstName(fName), lastName(lName), age(age) {}

Person::~Person() { std::cout << "Destructor is called. " << std::endl; }

void Person::SetFirstName(std::string const &fName)
{
    this->firstName = fName;
}

std::string Person::GetFirstName()
{
    return this->firstName;
}

void Person::SetLastName(std::string const &lName)
{
    this->lastName = lName;
}
std::string Person::GetLastName()
{
    return this->lastName;
}
void Person::SayHello()
{
    std::cout << "Hello" << std::endl;
}
