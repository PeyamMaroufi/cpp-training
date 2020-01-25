#include <iostream>
using namespace std;
int main()
{
    /* Working with pointers  */
    int num = 3;
    int *pNum = &num;
    cout << *pNum << " has the reference addres of " << pNum << endl;

    int siffra = 10;
    int *pSiffra = &siffra;
    cout << *pSiffra << " has the adress of " << pSiffra << endl;

    *pSiffra = 20;
    cout << *pSiffra << endl;
    cout << pSiffra << endl;
    int **pnumSiff = &pSiffra;
    cout << **pnumSiff << " has the address " << pnumSiff << endl;
    return 0;
}