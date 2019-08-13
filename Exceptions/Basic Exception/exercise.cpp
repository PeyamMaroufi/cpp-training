#include <iostream>
using namespace std;
void canGoWrog()
{
    int x = 11;
    if (x == 10)
    {
        throw 15;
    }
    if (x == 11)
        throw string("This is my fault");
}
void secongGoWrong()
{
    canGoWrog();
}
int main()
{

    try
    {
        secongGoWrong();
    }
    catch (int e)
    {
        cout << "Error code: " << e << endl;
    }catch(string &e){
        cout << "This is a string error: " << e << endl;
    }
    return 0;
}