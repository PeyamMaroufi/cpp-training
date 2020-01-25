#include <iostream>
#include "Student.h"

using namespace std;
int main()
{
    Student student1;
    student1.SetFirstName("Payam");
    student1.SetLastName("Maroufi");
    student1.setAge(30);

    std::cout << "Name: " << student1.GetFirstName() << std::endl;

    std::cout << "Lastname: " << student1.GetLastName() << std::endl;

    std::cout << "Age: " << student1.getAge() << std::endl;

    return 0;
}