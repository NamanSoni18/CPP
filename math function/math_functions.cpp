// Author: Naman Soni

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Counting Minimum and Maximum Values using min and max function respectively.
    cout << "Minimum of 2 and 6 is: " << min(2, 6) << endl; /* Calculating Minimum value  #Minimum is: 2 */
    cout << "Maximum of 2 and 6 is: " << max(2, 6) << endl; /* Calculating Maximum value  #Maximum is: 6 */

    // Calculating Square root using sqrt function.
    cout << "Square root of 49 is: " << sqrt(49) << endl; /* Calculating Square root  #Square root is: 7 */

    // Calculating Round of any number using round function.
    cout << "Round of 2.6 is: " << round(2.6) << endl; /* Calculating Round of any Number  #Round of 2.7 is: 3 */

    // Calculating Logarithmic value using log function.
    cout << "Log of 3 is: " << log(3) << endl; /* Calculating Log value of any Number  #Log of 3 is: 1.09861 */

    /* Calculating power using pow function. This requires two value one is base value and other is power value. */
    cout << "Value of 2^5 is: " << pow(2, 5) << endl; /* Calculating Power  #Value of 2^5 is: 32 */

    /* Calculating floor value using floor function. This Function print lesser or equal value inputed in his argument. */
    cout << "floor value of 4.65 is: " << floor(4.65) << endl; /* Calculating floor value  #floor value of 4.65 is: 4 */

    /* Calculating ceil value using ceil function. This Function print larger or equal value inputed in his argument. */
    cout << "Ceil value of 6.22 is: " << ceil(6.22) << endl; /* Calculating ceil Value  #ceil value of 6.22 is: 7 */

    /* Calculating Absolute value using abs function. This Function is similar to mod it returns positive value. */
    cout << "absolute value of -4.65 is: " << abs(-4.65) << endl; /* Calculating Absolute value or mod value  #absolute value of -4.65 is: 4.65 */

    /* Calculating Hytpotenuse value using hypot function. This require two value one is perpendicular and other is base value and return both hypotenuse value. */
    cout << "hypotenuse value of 3 and 4 is: " << hypot(3, 4) << endl; /* calculating Hytpotenuse value  $Hypotenuse value of 3 and 4 is: 5 */

    return 0;
}