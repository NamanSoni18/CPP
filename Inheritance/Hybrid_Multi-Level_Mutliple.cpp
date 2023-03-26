// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
public:
	void show_base()
	{
		cout << "Base Class for Class2.\n";
	}
};
class demo1 : public demo
{
public:
	void show_derived()
	{
		cout << "Derived Class for Class1.\n";
	}
	void show1_base()
	{
		cout << "Base Class for Class2.\n";
	}
};
class demo_another
{
public:
	void show_another_base()
	{
		cout << "Base Class for Class 3.\n";
	}
};
class demo2 : public demo1, public demo_another
{
public:
	void show1_derived()
	{
		cout << "Derived Class for Class2, another Class.";
	}
};
int main()
{
	demo2 d2;
	d2.show_base();
	d2.show_derived();
	d2.show1_base();
	d2.show_another_base();
	d2.show1_derived();
	return 0;
}
