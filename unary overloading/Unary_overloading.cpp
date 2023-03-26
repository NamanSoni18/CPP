// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;
class unary
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-();
};
void unary ::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void unary ::display()
{
    cout << "X: " << x << "  ";
    cout << "Y: " << y << "  ";
    cout << "Z: " << z << "  ";
}
void unary ::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    unary U;
    U.getdata(100, -200, 300);
    cout << "U: ";
    U.display();

    -U;
    cout << "\n-U: ";
    U.display();

    return 0;
}
