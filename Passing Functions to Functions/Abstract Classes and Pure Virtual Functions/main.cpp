#include <iostream>
using namespace std;

/* Abstract class */
class Animal
{
public:
	/* Pure virtual function which means that the function is equal to zero and is virtual
	 * When we have a pure virtual function then it is natural to have a so called abstract
	 * class. */
	virtual void run() = 0;
	virtual void speak() = 0;
};

/* Abstract class */
class Dog : public Animal
{
public:
	/* Since the base class has an other function called run then we can not make an object of
     * type Dog and call its functions. because not all the pure virtual function have been
     * implemented. Then if suppose that the requirement is to make another class the derives
     * from Dog and in that class we implement the remaining pure virtual functions then we can
     * instancelized the object. */
	void speak() { cout << "Woof" << endl; }
};

class Bulldog : public Dog
{
public:
	Bulldog() { cout << "I am BullDog" << endl; }
	/* As you see here we implement the last remaining pure virtual functions. then now we can make
 	 * an instance of the type of Bulldog that derives from the class Dog. */
	virtual void run()
	{
		cout << "Bulldog is running" << endl;
	}
};
int main()
{
	// Dog dog; <- this is not going to work
	Bulldog bulldog;
	bulldog.run();
	bulldog.speak();

	/*  We can not either make an array of animal class but we can make a array of pointers */
	Animal *animals[5];
	animals[0] = &bulldog;
	animals[0]->run();

	/*  You can in other words make an pointer array of the super class and give it the reference
	 * of all the subclasses. */
	return 0;
}