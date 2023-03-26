// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;

class demo
{
public:
	void show_base()
	{
		cout << "Base Class for Class2_1,Class2_2.\n";
	}
};
class demo2_1 : public demo
{
public:
	void show_base_1()
	{
		cout << "Base Class for Class2.\n";
	}
	void show_derived_1()
	{
		cout << "Derived Class for Class0.\n";
	}
};
class demo2_2 : public demo
{
public:
	void show_base_2()
	{
		cout << "Base Class for Class2.\n";
	}
	void show_derived_2()
	{
		cout << "Derived Class for Class0.\n";
	}
};
class demo3 : public demo2_1, public demo2_2
{
public:
	void show_derived3()
	{
		cout << "Derived Class for Class0,Class2_1,Class2_2.";
	}
};
int main()
{
	demo2_1 d1;
	demo2_2 d2;
	demo3 d3;
	d1.show_base();
	d3.show_base_1();
	d3.show_derived_1();
	d3.show_base_2();
	d3.show_derived_2();
	d3.show_derived3();
	return 0;
}
