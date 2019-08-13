#include <iostream>
#include <map>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0)
    {
    }

    Person(const Person &other)
    {
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) : name(name), age(age) {}
    void print()
    {
        cout << name << ":" << age << endl;
    }
};

int main()
{
    map<int, Person> people;

    /* Ordningen spelar ingen roll. När du gör output den kommer att skriva ut skiten i ordning */
    people[0] = Person("Mike", 40);
    people[1] = Person("Peyam", 30);
    people[2] = Person("Raj", 32);

    people.insert(make_pair(40, Person("Sue", 23)));
    people.insert(make_pair(44, Person("Bob", 45)));

    /* Eftersom vi anropar en funktion skall vi helst inte ha skiten */
    for (map<int, Person>::iterator it = people.begin();
         it != people.end(); it++)
    {
        // pair<int, Person> pit = *it;
        // cout << pit.first << ": "<< flush;
        // pit.second.print();
        cout << it->first << ":" << flush;
        it->second.print();
    }
    return 0;
}