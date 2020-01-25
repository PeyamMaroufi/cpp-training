
#pragma once
#include <string>
#include "Person.h"
class Student:public Person
{
private:
    std::string course;

public:
    Student();
    ~Student();
    virtual void display() const;
};