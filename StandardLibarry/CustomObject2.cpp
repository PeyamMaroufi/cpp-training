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
    void print() const
    {
        cout << name << ":" << age << flush;
    }

    /* det här används om nyckeln har samma namn då skickar vi ut två nya. Alltså den tittar på om det redan finns ngn jävel med samma namn och vi skriver in hen i listan. */
    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }
        else
        {
            return name < other.name;
        }
    }
};

int main()
{
    map<Person, int> people;

    /* Ordningen spelar ingen roll. När du gör output den kommer att skriva ut skiten i ordning */
    people[Person("Mike", 31)] = 0;
    people[Person("Mike", 30)] = 5;
    people[Person("Raj", 24)] = 1;
    people[Person("Vicky", 32)] = 2;

    /* Eftersom vi anropar en funktion skall vi helst inte ha skiten */
    for (map<Person, int>::iterator it = people.begin();
         it != people.end(); it++)
    {
        // pair<int, Person> pit = *it;
        // cout << pit.first << ": "<< flush;
        // pit.second.print();
        cout << it->second << ":" << flush;
        it->first.print();
        cout << endl;
    }
    return 0;
}