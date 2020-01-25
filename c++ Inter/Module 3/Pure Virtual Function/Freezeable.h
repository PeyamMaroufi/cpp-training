#pragma once
class Freezeable
{
public:
    virtual void freeze() = 0;
    virtual void unfreeze() = 0;
};