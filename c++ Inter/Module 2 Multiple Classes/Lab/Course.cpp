/* This classe needs to have an arrat of students. */
/* The course class will contain only one teacher class */
#include "Course.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>
Course::Course() {}
Course::Course(Student student1, Student student2, Student student3, Teacher teach, std::string course_name)
{
    this->students[0] = student1;
    this->students[1] = student2;
    this->students[2] = student3;
    this->courseName = course_name;
}
Course::~Course() {}
void Course::printCourseName()
{
    std::cout << this->courseName << std::endl;
}