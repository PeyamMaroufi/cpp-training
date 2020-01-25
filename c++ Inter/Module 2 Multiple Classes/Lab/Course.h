#pragma once
#include "Student.h"
#include "Teacher.h"
#include <string>
class Course
{
private:
    Student students[3];
    Teacher teacher;
    std::string courseName;

public:
    Course();
    Course(Student student1, Student student2, Student student3, Teacher teach, std::string course_name);
    ~Course();
    void printCourseName();
};