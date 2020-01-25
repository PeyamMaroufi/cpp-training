#include <iostream>
using namespace std;

/* Class Person */
class Person
{
public:
    string name;
    double age, height, weight;
};

/* Declaration */
void PassByValue(int i);
void PassByRef(int &i);
void ModifyPerson(Person p);

int main()
{
    /* Variable integer */
    int num1;

    /* Assignning value 3 to the int variable */
    num1 = 3;

    /* Calling PassByValue function */
    PassByValue(num1);
    cout << "You are in the main and the value of num1 is still " << num1 << endl;

    /* Integer referance to an int */
    int pNum;

    /* Assigning value 5 to the value in the memory */
    pNum = 5;
    PassByRef(pNum);
    cout << "You are in the main and the value of pNum is " << pNum << endl;

    /* Creating a pointer and allocate memory */
    double *pDouble = new double;
    *pDouble = 6.0;

    cout << "The value of double is " << *pDouble << " and the location is " << pDouble << endl;

    delete pDouble;

    /* Person class */
    Person p;
    p.age = 13.5;
    p.height = 175.9;
    p.weight = 65.7;
    cout << "age " << p.age << " height " << p.height << " weight " << p.weight << endl;

    ModifyPerson(p);
    cout << "age " << p.age << " height " << p.height << " weight " << p.weight << endl;
}

void PassByValue(int i)
{
    /* Getting the value of i and change it only here */
    cout << "You are in side PassByValue. The new value is " << ++i << endl;
}

void PassByRef(int &i)
{
    /* Geting the reference of i and change it everywhere */
    i++;
    cout << "You are inside the passByref and the value is " << i << endl;
}

void ModifyPerson(Person p)
{
    p.age = 17.8;
    p.height = 183;
    p.weight = 75;
    cout << "age " << p.age << " height " << p.height << " weight " << p.weight << endl;
}
