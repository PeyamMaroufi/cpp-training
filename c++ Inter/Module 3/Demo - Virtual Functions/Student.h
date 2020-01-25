#pragma once
#include "Person.h"
class Student : public Person
{
private:
    std::string course;

public:
    Student();
    Student(const std::string &name, int age, const std::string &course);

    virtual void display() const;
    virtual ~Student();
};