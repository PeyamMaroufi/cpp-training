#pragma once
#include "Body.h"

class Handle
{
private:
    Body *body;

public:
    Handle();
    ~Handle();
    void someOperationonBody();
    int getData();
};