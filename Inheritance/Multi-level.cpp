// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
public:
	void show_base()
	{
		cout << "This Function Calling is Base Class for class1.\n";
	}
};
class demo1 : public demo
{
public:
	void show1_base()
	{
		cout << "This Function Calling is Base Class for Class2.\n";
	}
	void show_derived()
	{
		cout << "This Function Calling is Derived Class for class0.\n";
	}
};
class demo2 : public demo1
{
public:
	void show1_derived()
	{
		cout << "This Function Calling is Derived Class for class0,Class1.";
	}
};
int main()
{
	demo2 d2;
	d2.show_base();
	d2.show_derived();
	d2.show1_base();
	d2.show1_derived();
	return 0;
}
