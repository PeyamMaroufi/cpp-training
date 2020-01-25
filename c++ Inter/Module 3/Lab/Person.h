#pragma once
#include <string>
class Person
{
private:

protected:
    int age;
    std::string phone_num;
    std::string first_name,
        last_name,
        race;

public:
    Person();
    Person(const std::string &f_name, const std::string &l_name, const std::string &race_);
    Person(const std::string &f_name, const std::string &l_name, const std::string &race_, int age);
    virtual ~Person();

    void virtual OutputIdentity() = 0;
    void virtual OutputAge() const;
};