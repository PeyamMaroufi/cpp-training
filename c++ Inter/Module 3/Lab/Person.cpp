#include "Person.h"
#include <iostream>

Person::Person() : first_name("unknown"), last_name("Unknown"), race("Unknown"), age(0) {}

Person::Person(const std::string &f_name, const std::string &l_name, const std::string &race_) : first_name(f_name), last_name(l_name), race(race_), age(16) {}

Person::Person(const std::string &f_name, const std::string &l_name, const std::string &race_, int age) : first_name(f_name), last_name(l_name), race(race_), age(age) {}

Person::~Person() {}

void Person::OutputIdentity()
{
    std::cout << first_name << " " << last_name << " " << race << ". The age " << age << std::endl;
    std::cout << "Hello from outputIndentity from Person class" << std::endl;
}

void Person::OutputAge() const
{
    std::cout << "Helloe from OutputAge Person class" << std::endl;
}