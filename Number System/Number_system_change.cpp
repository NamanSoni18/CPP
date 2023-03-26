#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
  // Ask the user for the input number system
  cout << "Enter the input number system (2, 8, 10, or 16): ";
  int inputBase;
  cin >> inputBase;

  // Ask the user for the output number system
  cout << "Enter the output number system (2, 8, 10, or 16): ";
  int outputBase;
  cin >> outputBase;

  // Ask the user for the number in the input number system
  cout << "Enter the number in the input number system: ";
  string inputNumber;
  cin >> inputNumber;

  // Convert the input number to base 10 (decimal)
  int decimalValue = strtol(inputNumber.c_str(), NULL, inputBase);

  // Convert the decimal value to the output base
  string outputNumber;
  while (decimalValue > 0)
  {
    int remainder = decimalValue % outputBase;
    outputNumber = to_string(remainder) + outputNumber;
    decimalValue /= outputBase;
  }

  // Print the result
  cout << "The number in the output number system is: " << outputNumber << endl;

  return 0;
}
