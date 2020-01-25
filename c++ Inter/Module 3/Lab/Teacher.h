#pragma once
#include "Person.h"

class Teacher : public Person
{
public:
    Teacher(const std::string &f_name, const std::string &l_name, const std::string &race_, int age);
    Teacher();
    virtual ~Teacher();
    void virtual OutputAge() const;
    void virtual OutputIdentity();
};