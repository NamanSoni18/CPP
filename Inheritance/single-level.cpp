// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
public:
	void show_base()
	{
		cout << "From Base Class.\n";
	}
};
class demo1 : public demo
{
public:
	void show_derived()
	{
		cout << "From Derived Class.";
	}
};
int main()
{
	demo1 d;
	d.show_base();
	d.show_derived();
	return 0;
}
