// Created by: Naman Soni

#include <iostream> // Header File
#include <conio.h>
using namespace std;
int main()
{

    int r = 3;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            /* This loop is used to print Spaces from getting Asterik started with pyramid type */
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            // This loop is used to print Stars
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}