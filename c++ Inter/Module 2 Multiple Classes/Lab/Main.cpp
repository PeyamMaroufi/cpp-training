#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
using namespace std;
int main()
{
    Student *student1 = new Student("Payam", "Maroufi", "Helsovagen 20", "Stockholm", 31, "0707747837");
    Student *student2 = new Student("Arash", "Rad", "Halsovagen 20", "City", 32, "0700969525");
    Student *student3 = new Student("Peyman", "Maroufi", "Halsovagen 20", "Norrkoping", 35, "07258323831");
    Teacher *teacher= new Teacher("Payam", "Maroufi", "Halsovagen 40", "Flemingsberg", 43, "0708857463");

    Course *course = new Course(*student1, *student2, *student3, *teacher, "Intermidiate c++");
    course->printCourseName();
    teacher->GradeStudent();

    delete student3, student2, student1, teacher, course;
}