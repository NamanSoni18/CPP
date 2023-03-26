// Author: Naman Soni
// Created on: 27-Aug-2022 09:43AM
// Writing every string code used in C++

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Concatenation or addition of two string
    string name1 = "Naman";
    string name2 = "Soni";
    cout << name1 + name2 << endl;       /* Without Space  #NamanSoni */
    cout << name1 + " " + name2 << endl; /* With Space  #Naman Soni */

    // Addition of two number in string form
    string num1 = "16";
    string num2 = "08";
    cout << num1 + num2 << endl; // addition of Number  #1608

    // Counting Lenght or size of any String
    string alpha = "fdsjfkanfasdjkfdklfadjsfklsfdskldfkjefofjrjesoiejfselfjasgfsfss";
    cout << "Length is: " << alpha.length() << endl; /* Counting Length  #Length is: 63 */
    cout << "Size is: " << alpha.size() << endl;     /* Counting Size  #Size is: 63 */

    // Note:- Size is same as length in C++

    // Using array to print only one character of any name
    string myname = "Naman";
    cout << "First Character is: " << myname[0] << endl;  /* Printing first Character of string  #First Character is: N */
    cout << "Second Character is: " << myname[1] << endl; /* Printing Second Chacter of String  #Second Character is: a */
    // Note:- Array strarts with index 0 i.e. numbering counts with 0

    // Change of String using array
    string name = "Hello";
    name[0] = 'J';        // Replacing First Character with J
    cout << name << endl; // #Jello

    // Taking String Input from the user(Only First Name)
    string firstname;
    cout << "Enter Your First Name: ";
    cin >> firstname;                               // Taking only first Name from the user
    cout << "First Name is: " << firstname << endl; /*  #First Name is: Naman */
    return 0;
}