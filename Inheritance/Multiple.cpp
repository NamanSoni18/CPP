// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
public:
	void show()
	{
		cout << "This Function Calling is Base Class for Class2.\n";
	}
};
class demo1
{
public:
	void show1()
	{
		cout << "This Function Calling is Base Class for Class3.\n";
	}
};
class demo2
{
public:
	void show2()
	{
		cout << "This Function Calling is Base Class for Class4.\n";
	}
};
class demo3 : public demo, public demo1, public demo2
{
public:
	void show3()
	{
		cout << "This Function Calling is Derived Class for All Base Class.";
	}
};
int main()
{
	demo3 d;
	d.show();
	d.show1();
	d.show2();
	d.show3();
}
