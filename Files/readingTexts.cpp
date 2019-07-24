#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "Text.txt";
    ifstream inFile;
    inFile.open(fileName);
    if (inFile.is_open())
    {
        /* Sparar varje rad i den här skitvariabeln */
        string line;

        /* So länge vi inte är i slutet av filen */
        /* while(inFile) funkar också */
        while (!inFile.eof())
        {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }
    else
    {
        cout << "Cannot open file: " << fileName << endl;
    }
    return 0;
}