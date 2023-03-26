// Created by: Naman Soni

#include <iostream>
using namespace std;

class Base
{
public:
	virtual void print()
	{
		cout << "This is the base class." << endl;
	}
};

class Derived : public Base
{
public:
	void print()
	{
		cout << "This is the derived class." << endl;
	}
};

int main()
{
	Base B;
	Derived D;
	Base *bptr;

	cout << "\nPrinting Base Class: \n";
	bptr = &B;
	bptr->print();

	cout << "\nPriting Derived Class: \n";
	bptr = &D;
	bptr->print();

	return 0;
}
