// Created by: Naman Soni
#include <iostream>
using namespace std;

class Vector2D
{
    double m_x, m_y;

public:
    Vector2D(double x = 0, double y = 0) : m_x(x), m_y(y) {}

    double getX() const
    {
        return m_x;
    }
    double getY() const
    {
        return m_y;
    }

    Vector2D operator+(const Vector2D &other)
    {
        return Vector2D(m_x + other.m_x, m_y + other.m_y);
    }
};

int main()
{
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);
    Vector2D v3 = v1 + v2;
    cout << v3.getX() << ", " << v3.getY() << endl;
    return 0;
}
