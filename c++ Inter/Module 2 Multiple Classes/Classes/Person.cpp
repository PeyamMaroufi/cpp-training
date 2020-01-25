#include "Person.h"
#include <iostream>

/* Default constructor */
Person::Person() : firstName(""), lastName(""), age(0) {}

/* Constructor with arguments */
Person::Person(std::string const &fName, std::string const &lName) : firstName(fName), lastName(lName), age(0) {}

/* Constructor with 3 arguments */
Person::Person(std::string const &fName, std::string const &lName, int const &age) : firstName(fName), lastName(lName), age(age) {}

/* Destructor */
Person::~Person() {}

/*  Shitty function */
void Person::SayHello()
{
    std::cout << "You are in the sayHello function" << std::endl;
    std::cout << "The name you entered is " << this->firstName << " and the last name is " << this->lastName << " and the age is " << this->age << std::endl;
}