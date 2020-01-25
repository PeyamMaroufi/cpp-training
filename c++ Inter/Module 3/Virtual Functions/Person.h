#pragma once
#include <string>
class Person
{
private:
    std::string name;
    int age;

public:
    Person();
    virtual ~Person();
    virtual void display() const;
};