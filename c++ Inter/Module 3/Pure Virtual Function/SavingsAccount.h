#pragma once
#include "BackAccount.h"
#include "Freezeable.h"
#include "Loggable.h"
#include <list>
class SavingsAccount : public BankAccount, public Freezeable, public Loggable
{
private:
    double interestRate;
    bool frozen;

public:
    SavingsAccount(double initialBalance, double interestRate = 0);
    virtual ~SavingsAccount();

    void earnInterest();

    virtual void deposit(double amount);
    virtual void withdraw(double amount);

    virtual std::string getInterestAndCondition();
    virtual double getGuaranteedLimit();

    virtual void freeze();
    virtual void unfreeze();

    virtual void log(const std::string &message) const;
    
};