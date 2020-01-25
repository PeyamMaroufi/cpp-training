#include "Person.h"
#include <iostream>

Person::Person() : name("Payam"), age(10) {}
Person::~Person()
{
    std::cout << "Desctructor is called" << std::endl;

}
void Person::display() const
{
    std::cout << "This function is virtual. This is Person class" << std::endl;
}