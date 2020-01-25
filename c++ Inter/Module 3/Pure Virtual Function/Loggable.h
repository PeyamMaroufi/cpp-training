#pragma once
#include <string>

class Loggable
{
public:
    virtual void log(const std::string &message) = 0;
};