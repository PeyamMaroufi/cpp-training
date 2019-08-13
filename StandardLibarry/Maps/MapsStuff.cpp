#include <iostream>
#include <map>
using namespace std;
int main()
{
    /* Map is alike a look up table. You have in this exemple name and age */
    map<string, int> ages;
    ages["Mike"] = 19;
    ages["Roj"] = 22;
    ages["Vicky"] = 19;
    ages["Mohammad"] = 21;

    /* Overwriteing the variable */
    ages["Mike"] = 70;

    /* Med hjälp of pair i två steg*/
    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);
    /* Skriva direkt till pairen */
    ages.insert(pair<string, int>("Payam", 100));
    /* Användning av make_pair */
    ages.insert(make_pair("Stefan", 45));

    /*  Om du t ex. skriver cou << ages["ahmed"] << endl; Ahmad kommer att sparas i mappen men med age 0. För att inte lägga till den gör vi en if sats */
    if (ages.find("Ahmad") != ages.end())
    {
        cout << "found Vicky" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    /*  Ett annat sätt att skriva ut skiten */
    cout << "Using pair<string, int>\n ------------------------------" << endl;
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        pair<string, int> age = *it;
        cout << age.first << ":" << age.second << endl;
    }
    cout << "Using it-> first \n ------------------------------" << endl;

    /*  Ett annat sätt att skriva ut skiten */
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}