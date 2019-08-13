#include <iostream>
#include <vector>
using namespace std;

int main()
{

    /* for initializing the elements you can have for instance numbers(20,1) which means
    create 20 elements and all of them should be 1 initially */
    vector<double> numbers(20);
    cout << numbers.size() << endl;

    /* When adding element a new copy will be made and all the values of numbers will be added to it */
    /* Size of the internal array that the vector is using and will increase in steps */
    int capacity = numbers.capacity();
    cout << "Capacity with initial size of 20: " << capacity << endl;

    for (int i = 0; i < 20; i++)
    {
        if (numbers.capacity() != capacity)
        {
            /* As you see the capacity will increase exponentially */
            capacity = numbers.capacity();
            cout << "Capacity: " << capacity << endl;
        }
        numbers.push_back(i);
    }
    numbers.clear();
    cout << "Size: " << numbers.size() << endl;
    /* The capacity will not reset. */
    cout << "Capacity with size of 0: " << numbers.capacity() << endl;

    /* If the size is less than the capacity the capacity will not change but if it is bigger then the capacity gets that value */
    numbers.resize(20);
    cout << "Size: " << numbers.size() << endl;
    /* The capacity will not reset if size less than capacity */
    cout << "Capacity: " << numbers.capacity() << endl;

    numbers.reserve(1000);
    cout << "Size: " << numbers.size() << endl;
    /* The capacity will increase */
    cout << "Capacity with reserve of 100: " << numbers.capacity() << endl;
    return 0;
}