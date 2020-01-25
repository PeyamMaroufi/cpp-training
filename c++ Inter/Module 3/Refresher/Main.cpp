#include "Person.h"
#include "Student.h"
int main()
{
    Student student1;
    student1.displayNameAge();
    student1.displayCourse();

    Student student2("Jane Smith", 18, "Physics");
    student2.displayCourse();
    student2.displayNameAge();

    return 0;
}