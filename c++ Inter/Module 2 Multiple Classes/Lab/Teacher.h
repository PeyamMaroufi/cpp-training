#pragma once
#include <string>
class Teacher
{
private:
    std::string firstName, lastName, address, city;
    int age;
    std::string phone;

public:
    Teacher();
    Teacher(std::string fName, std::string lName, std::string addres, std::string cit, int _age, std::string _phone);
    ~Teacher();
    void GradeStudent();
    void SitInClass();
};