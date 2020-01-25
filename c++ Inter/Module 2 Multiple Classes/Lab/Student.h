#pragma once
#include <string>
class Student
{
private:
    std::string firstName, lastName, address, city;
    int age;
    std::string phone;

public:
    Student();
    Student(std::string fName, std::string lName, std::string addres, std::string cit, int _age, std::string _phone);
    ~Student();
    void SitInClass();
};