#include <iostream>
using namespace std;
class Parent
{
public:
	Parent() {}
	Parent(const Parent &other) { cout << "Copy constructor " << endl; }
	/* Without the virtual keyword we could not call the correct function as in line 27-31  */
	virtual void print()
	{
		cout << "parent" << endl;
	}
	virtual ~Parent() {}
};

/* Creating a child class to the parent */
class Child : public Parent
{
public:
	/* For this to work we need to have a default constructor in the parent class. */
	void print()
	{
		cout << "child" << endl;
	}
};

int main()
{
	Child c1;
	/* The lesson is that when we refere a superclass to a subclass we can get the subclass's
	 * functions and methods. */
	Parent &p1 = c1;
	p1.print();

	/* In this with equal sign we actually pass in the Child to the copy constructor. But if we
     *  have a copy constructor then we have to have a default constructor in order to the child
     * class to work */
	Parent p2 = Child();
	p2.print();
	return 0;
}