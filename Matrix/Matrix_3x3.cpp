// Created by: Naman Soni

#include <iostream> // Header File
#include <conio.h>
using namespace std;

int i, j, k, mat1[100][100], mat2[100][100], mul[100][100];

// This Function will Add both Matrices
void add_mat()
{
    cout << "\n Addition of Matrixes is: \n";
    for (i = 1; i <= 3; i++)
    {
        cout << endl;
        for (j = 1; j <= 3; j++) /* Addition of Two Matrix */
        {
            cout << "\t " << mat1[i][j] + mat2[i][j] << " ";
        }
    }
}

// This Function will Subtract both Matrices
void sub_mat()
{
    cout << "\n Subtraction of Matrixes: \n";
    for (i = 1; i <= 3; i++)
    {
        cout << endl;
        for (j = 1; j <= 3; j++) /* Subtraction of Two Matrix */
        {
            cout << "\t " << mat1[i][j] - mat2[i][j] << " ";
        }
    }
}

// This Function will Multiply both Matrices
void mul_mat()
{
    cout << "\n Multiplication of Matrixes: \n";
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            mul[i][j] = 0;
            for (k = 1; k <= 3; k++) /* Multiplication of Two matrix */
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            cout << "\t " << mul[i][j]; // Printing matrices
        }
        cout << endl;
    }
}
int main()
{
    char system;
    cout << "Enter value of First Matrix: " << endl;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            cout << "Enter a" << i << j << ": ";
            cin >> mat1[i][j]; /* Taking First matrix values from the user */
        }
    }
    cout << "Enter value of Second Matrix: " << endl;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            cout << "Enter b " << i << j << ": ";
            cin >> mat2[i][j]; /* Taking Second matrix values from the user */
        }
    }
    cout << "Write A(for Addition), S(For Substraction), M(for Multiplication): "; /* Asking Forms */
    cin >> system;
    switch (system)
    {
    case 'A':
        add_mat(); // Function Calling
        break;
    case 'S':
        sub_mat(); // Function Calling
        break;
    case 'M':
        mul_mat(); // Function Calling
        break;
    default:
        cout << "Invalid Option\nProgram is Terminating...";
        break;
    }
    return 0;
}
