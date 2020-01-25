#pragma once
#include <string>
class Person
{
private:
    std::string name;

protected:
    int age;

public:
    Person();
    Person(const std::string &name, int age);
    virtual void display() const;
    virtual ~Person();
};