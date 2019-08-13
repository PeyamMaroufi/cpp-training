#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Test
{
    int id;
    string name;

public:
    Test(int id, string name) : id(id), name(name) {}
    void print()
    {
        cout << id << ":" << name << endl;
    }
    // bool operator<(const Test &other) const
    // {
    //     if (name == other.name)
    //         return id < other.id;
    //     else
    //         return name < other.name;
    // }
    friend bool comp(const Test &a, const Test &b);
};

/* Vi kan alltså ha en annan funktion som jämför strängarna men eftersom name och id är privata i klassen Test kommer det här att ge ett felmeddelande för att vi kan inte nå de privata variablerna i klassen. För att kunna nå dem så kan vi deklarera funktionen även i klassen och skriva keyworden "friend" då kommer kompilern att göra klassens variabler synliga även för andra klasser. Observera att vi använder denna funktion för att slippa skriva om operator<() som jag har bortkommenerat ovan.*/
bool comp(const Test &a, const Test &b)
{
    return a.name < b.name;
}
int main()
{
    vector<Test> tests;
    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vicky"));

    /* Det här kommer att sortera alla element från början till slut. Om vi vill sortera de första två så skriver vi sort(tests.begin(), tests.begin()+2, comp) */
    sort(tests.begin(), tests.end(), comp);

    for (int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
    }
    return 0;
}