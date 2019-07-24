#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream outputFile;
    string outputFileName = "Text.txt";
    outputFile.open(outputFileName, ios::out);

    if (outputFile.is_open())
    {
        for (int i = 0; i < 100; i++)
        {
            outputFile << i << ". Hi How are you bitch number " << i << endl;
        }
        outputFile.close();
    }
    else
    {
        cout << "Could not create the object of that bitch" << endl;
    }
    return 0;
}