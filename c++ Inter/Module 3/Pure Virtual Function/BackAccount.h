#pragma once
#include <string>
class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double initialBalance);
    virtual ~BankAccount();

    double getBalance() const;
    virtual void deposit(double amount);
    virtual void withDraw(double amount);

    virtual std::string getTeresAndCondition() = 0;
    virtual double getGuaranteedLimit() = 0;
};
