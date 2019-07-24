#include <iostream>
#include <fstream>
using namespace std;

/* Get ridd of those 2 bytes */
/* Wanting only 1 byte padding, I don't know it so good */
#pragma pack(push, 1)

struct Person
{
    char name[50];
    int age;
    double height;
};

#pragma(pop)

int main()
{
    /* There is a padding to the structure because of some reason that I don't know */
    /* For instance try to print the size of the structure and you still get 64 bytes. */
    /* Bu the size of each variable together is 62. When it comes to wrtite data to files */
    /* You should try to get ridd of those 2 extra bytes */

    // cout << sizeof(Person) << endl;
    Person someone = {"Payam", 30, 75.8};
    string fileName = "test1.bin";
    ofstream outputFile;
    /* We write in the binary format */
    outputFile.open(fileName, ios::binary);

    if (outputFile.is_open())
    {
        /* We need the address of that struct. We need the keyword write here. */
        /* Vi behöver att casta pointer addressen och sedan skriva en storlek  */
        /* vi vill alltså den storleken av vår array. Vi kunde skrivit "someone"*/
        /* some har samma storlek */
        outputFile.write((char *)&someone, sizeof(Person));
        /* Det finns ett annat sätt att casta också. Enligt följande: */
        // outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outputFile.close();
    }
    else
    {
        cout << "Could not create file: " + fileName;
    }

    /* READING BINARY FILE */
    Person someoneElese = {};
    ifstream inputFile;
    outputFile.open(fileName, ios::binary);

    if (inputFile.is_open())
    {
        inputFile.read((char *)&someoneElese, sizeof(Person));

        inputFile.close();
    }
    else
    {
        cout << "Could not create file: " + fileName;
    }
    cout << someoneElese.name << ". " << someoneElese.age << ". " << someoneElese.height << endl;
    return 0;
}