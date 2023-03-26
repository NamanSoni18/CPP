// Created by: Naman Soni

#include <iostream> // Header File
#include <conio.h>
using namespace std;
int main()
{
    char n;
    cout << endl;
    for (n = 'A'; n <= 'G'; n++)
    {
        // This loop is used to print First row from A to G
        cout << " " << n;
    }
    cout << endl;

    for (n = 'A'; n <= 'G'; n++)
    {
        // This loop is used to print Second row from A to G except D
        if (n == 'D')
        {
            cout << "  ";
            continue;
        }
        cout << " " << n;
    }
    cout << endl;

    for (n = 'A'; n <= 'G'; n++)
    {
        // This loop is use to print Third row from A to G excepts C,D,E
        if (n >= 'C' && n <= 'E')
        {
            cout << "  ";
            continue;
        }
        cout << " " << n;
    }
    cout << endl;
    for (n = 'A'; n <= 'G'; n++)
    {
        // This loop is use to print Third row from A to G excepts B,C,D,E,F
        if (n >= 'B' && n <= 'F')
        {
            cout << "  ";
            continue;
        }
        cout << " " << n;
    }
    return 0;
}
