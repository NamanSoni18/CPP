// Created by: Naman Soni

#include <iostream>
using namespace std;

// Define the base class
class Base
{
public:
    // Define a virtual function that can be overridden in derived classes
    virtual void printMessage()
    {
        cout << "This is a message from the base class." << endl;
    }
};

// Define the derived class
class Derived : public Base
{
public:
    // Override the printMessage function
    void printMessage()
    {
        cout << "This is a message from the derived class." << endl;
    }
};

int main()
{
    // Create an object of the derived class
    Derived d;

    // Call the printMessage function on the derived class object
    d.printMessage();

    return 0;
}
