#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool error = false;
    bool error2 = true;

    if (error)
    {
        throw "something went wrong";
    }
    if (error2)
        throw string("Something else went wrong");
}
void useMightGoWrong(){
    mightGoWrong();
}

int main()
{
    try
    {
        useMightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code : " << e << endl;
    }
    catch (char const *e)
    {
        cout << "Enter code: " << e << endl;
    }
    catch (string &e)
    {
        cout << "Error: " << e << endl;
    }
    cout << "Still running " << endl;
    return 0;
}