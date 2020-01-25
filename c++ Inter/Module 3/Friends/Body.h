#pragma once
#include<string>

class Handle; // Forward declaration. This is enough for you to declare a friend class
class Body
{
    /* Declare the class as friend. */
    friend class Handle;

private:
    int someData;

};
