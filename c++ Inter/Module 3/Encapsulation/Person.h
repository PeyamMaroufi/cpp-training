#pragma once
#include <string>
class Person
{
private:
    std::string firstName;
    std::string lastName;

protected:
    int age;

public:
    Person();
    Person(std::string const &fName, std::string const &lName);
    Person(std::string const &fName, std::string const &lName, int const &age);
    ~Person();

    void SetFirstName(std::string const &fName);
    std::string GetFirstName();

    void SetLastName(std::string const &lName);
    std::string GetLastName();

    void SayHello();
};