#pragma once
#include <string>
class Person
{
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person();
    Person(std::string const &fName, std::string const &lName);
    Person(std::string const &fName, std::string const &lName, int const &age);
    ~Person();
    void SayHello();
};