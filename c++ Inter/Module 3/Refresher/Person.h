#pragma once
#include <string>
class Person
{
private:
    std::string firstName;

protected:
    int age;

public:
    Person();
    Person(const std::string &fName, int age);
    ~Person();
    void displayNameAge() const;
};