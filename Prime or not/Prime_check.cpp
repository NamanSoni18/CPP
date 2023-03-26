// Created by: Naman Soni

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int n, i, p = 0;
  cout << "Enter a Positive Integer: ";
  cin >> n; // Taking input from the user

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    { // for non-prime numbers
      p = 1;
      break;
    }
  }

  if (n == 1)
  {
    cout << "1 is neither Composite nor Prime";
  }
  else
  {
    if (p == 0)
      cout << n << " is a Prime Number";
    else
      cout << n << " is not a Prime Number";
  }
  return 0;
}