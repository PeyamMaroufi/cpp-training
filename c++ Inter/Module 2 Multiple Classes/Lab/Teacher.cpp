#include <iostream>
#include "Teacher.h"
Teacher::Teacher() {}

Teacher::Teacher(std::string fName, std::string lName, std::string addres, std::string cit, int _age, std::string _phone)
{
    this->firstName = fName;
    this->lastName = lName;
    this->address = addres;
    this->city = cit;
    this->age = _age;
    this->phone = _phone;
}
Teacher::~Teacher()
{
}
void Teacher::GradeStudent()
{
    std::cout << "Student graded." << std::endl;
}
void Teacher::SitInClass()
{
    std::cout << "Sitting at fromt of class." << std::endl;
}