// Created by: Naman Soni

#include <iostream> // Header File
#include <conio.h>
using namespace std;
int main()
{

    int i, j, r = 4, n, k;
    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= r - i; j++)
        {
            /* This loop is used to space to print space for printing numbers with pyramid type */
            cout << " ";
        }
        n = 1;
        for (k = 0; k <= i; k++)
        {
            // This loop is use to print value
            if (i == 1)
            {
                continue;
            }
            cout << " " << n;
            n = n * (i - k) / (k + 1);
        }
        if (i == 1)
        { /* When i is equal to 1 the loop doesn't make new line */
            cout << endl;
            continue;
        }
        if (i >= 2 && i <= 4)
        { /* Again When i is equal to 2 to 4 then loop will start making new lines */
            cout << endl;
        }
    }
    return 0;
}