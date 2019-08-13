#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "stats.txt";
    ifstream input;
    input.open(fileName);
    if (!input.is_open())
    {
        return 1;
    }

    while (input)
    {
        /* Line variable */
        string line;
        /* Geting the line and split when you have a ',' */
        getline(input, line, ',');

        /* Insert the int in to the variable population */
        int population;
        input >> population;

        /* I don't know what this does but it makes the line disappears */
        input >> ws;

        /* when we are at the end of the file then break the while */
        if (!input)
        {
            break;
        }

        cout << "'" << line << "'"
             << " --- '" << population << "'" << endl;
    }
    input.close();

    return 0;
}
// Have to remove new characters from a string
