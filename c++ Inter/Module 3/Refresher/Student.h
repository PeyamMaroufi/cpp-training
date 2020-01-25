#pragma once
#include "Person.h"
#include <string>

class Student : public Person
{
private:
    std::string course;

public:
    Student();
    Student(const std::string &name, int age, const std::string &course);
    ~Student();
    void displayCourse() const;
};