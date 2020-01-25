#pragma once
#include "Person.h"
class Student : public Person
{
public:
    Student();
    Student(const std::string &f_name, const std::string &l_name, const std::string &race_, int age);
    virtual ~Student();
    void virtual OutputIdentity();
    void virtual OutputAge();
};