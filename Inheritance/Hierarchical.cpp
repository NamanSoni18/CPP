// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
public:
	void show()
	{
		cout << "This Function Calling is Base Class for Class1.\n";
	}
};
class demo1 : public demo
{
public:
	void show1()
	{
		cout << "This Function Calling is Derived Class for Class1.\n";
	}
};
class demo2 : public demo
{
public:
	void show2()
	{
		cout << "This Function Calling is Derived Class for Class2.\n";
	}
};
class demo3 : public demo
{
public:
	void show3()
	{
		cout << "This Function Calling is Derived Class for Class3.\n";
	}
};
int main()
{
	demo1 d1;
	demo2 d2;
	demo3 d3;
	d1.show();
	d1.show1();
	d2.show();
	d2.show2();
	d3.show();
	d3.show3();
}
