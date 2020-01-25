#include <iostream>
#include "Student.h"
Student::Student() {}
Student::Student(std::string fName, std::string lName, std::string addres, std::string cit, int _age, std::string _phone)
{
    this->firstName = fName;
    this->lastName = lName;
    this->address = addres;
    this->city = cit;
    this->age = _age;
    this->phone = _phone;
}
Student::~Student() {}
void Student::SitInClass()
{
    std::cout << "Sitting in main theater" << std::endl;
}