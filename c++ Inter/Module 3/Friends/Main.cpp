#include "Handle.h"
#include <iostream>
int main()
{
    Handle h;
    h.someOperationonBody();
    std::cout << h.getData() << std::endl;
    return 0;
}