// ---------------------------------OUTPUT LARGEST AND SMALLEST NUMBER---------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Input your first value" <<endl;
//     cin >> a;
//     cout << "You entered " << a <<endl;
//     cout << "Input your second value" << endl;
//     cin >> b;
//     cout << "You entered " << b << endl;
//     cout << "Input your third value" << endl;
//     cin >> c;
//     cout << "You entered " << c << endl;

//     int largestNum, smallestNum;
//     if (a >= b && a >= c) {
//         largestNum = a;
//         if (b <= c)
//             smallestNum = b;
//         else
//             smallestNum = c;
//     }
//     else if (b >= a && b >= c) {
//         largestNum = b;
//         if (a <= c)
//             smallestNum = a;
//         else
//             smallestNum = c;
//     }
//     else {
//         largestNum = c;
//         if (a <= b)
//             smallestNum = a;
//         else
//             smallestNum = b;
//     }

//     // largestNum = max(a, max(b, c));
//     // smallestNum = min(a, min(b, c));

//     cout << "The largest value is " << largestNum << endl;
//     cout << "The smallest value is " << smallestNum << endl;
//     return 0;
// }

// ---------------------------------OUTPUT MULTIPLE VARIABLES WITH PRINTF------------------------

// #include <iostream>

// using namespace std;

// int main () {
//     int a = 5;
//     int b = 6;
//     int c = 7;

//     printf("Your numbers are %d, %d and %d", a, b, c);
// }

// -------------------------------------POWER FUNCTION--------------------------------------

// #include <iostream>

// using namespace std;

// int power(int a, int b);

// int main() {
//     int base, exponent, result;

//     cout << "Enter the base value: ";
//     cin >> base;

//     cout << "Enter the exponent value: ";
//     cin >> exponent;

//     result = power(base, exponent);

//     cout << base << " raised to the power of " << exponent << " is " << result << endl;

//     return 0;
// }

// int power(int a, int b) {
//     if (b == 0) return 1; // Any number to the power of 0 is 1

//     int result = 1;
//     for (int i = 1; i <= b; i++) {
//         result *= a;
//         // result = result * a;
//     }
//     return result;
// }

// ---------------------------------HYPOTENUSE FUNCTION----------------------------------------

// #include <iostream>
// #include <cmath> // Use cmath instead of math.h for C++

// using namespace std;

// double hypotenuse(double b, double c);

// int main() {
// double b, c, result;

//     cout << "Enter the value for one side of your triangle: ";
//     cin >> b;

//     cout << "Enter the value for the other side: ";
//     cin >> c;

//     result = hypotenuse(b, c);

//     cout << "The hypotenuse for a triangle with sides " << b << " and " << c << " is " << result << "." << endl;

//     return 0;
// }

// double hypotenuse(double b, double c) {
//     double result = sqrt((b * b) + (c * c));
//     return result;
// }

// -----------------------------------ABSOLUTE FUNCTION---------------------------------------

// #include <iostream>
// #include <cmath> // Use cmath for math functions

// using namespace std;

// int absolute(int x);

// int main() {
//     int value, result;

//     cout << "Enter the value: ";
//     cin >> value;

//     result = absolute(value);

//     cout << "The absolute value of " << value << " is " << result << "." << endl;

//     return 0;
// }

// int absolute(int x) {
//     double result;
//     // Square the value
//     result = pow(x, 2);
//     // Take the square root of the squared value
//     result = sqrt(result);
//     // Return the absolute value
//     return static_cast<int>(result);
// }

// -----------------------------------IFLYQUEEN CLASS------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     // LOOPS
//     // initialization statement
//     // loopContinuation statement
//     // increment/decrement statement

//     // FOR LOOP
//     for (int ify = 0; ify < 10; ify++)
//     {
//         cout << "\ninitial " << ify;
//     }

//     // WHILE LOOP
//     int i2 = 0;
//     while (i2 < 10)
//     {
//         cout << "\nshe's a good girl I guess " << i2;
//         i2++;
//     }

//     // DO WHILE LOOP
//     int IFLYQUEEN = 1;
//     do
//     {
//         cout << "\n2. she's a good girl I guess " << IFLYQUEEN;
//         // IFLYQUEEN++;
//     } while (IFLYQUEEN++ <= 10);

//     return 0;
// }

// ----------------------------------CLASS AVERAGE------------------------------------

// #include <iostream>

// using std::cout;
// using std::cin;
// using std::endl;

// int main () {
//     int grade, gradeCounter, total, average, studentCount;

//     cout << "Enter number of students: ";
//     cin >> studentCount;

//     total = 0;

//     for (gradeCounter = 0; gradeCounter < studentCount; gradeCounter++) {
//         cout << "Enter grade: ";
//         cin >> grade;

//         total += grade;
//     }

//     average = total / studentCount;
//     cout << "Class average score is " << average << "." << endl;

//     return 0;
// }

// -------------------------------ONE DIMENSIONAL ARRAY--------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     int array[5] = { 1,
//                      7,
//                      9,
//                      4,
//                      5 };

//     for (int i = 0; i < 5; i++)
//     {
//         cout << array[i] << " ";
//     }
//     return 0;
// }

// -------------------------TWO DIMENSIONAL ARRAY--------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     int sport[3][3] = {
//         {3, 4, 4},
//         {2, 3, 6}};

//     cout << sport[0][1];

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int array[4][2] = {
//         {5, 2},
//         {4, 7},
//         {6, 9},
//         {8, 3},
//     };

//     for (int i = 0; i < 4; i++) {
//         cout << array[i][1];
//     }

//     return 0;
// }

// ------------------------------MULTI DIMENSIONAL ARRAY------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     string letters[2][2][2] = {
//         {{"A", "B"},
//          {"C", "D"}},
//         {{"E", "F"},
//          {"G", "H"}}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 cout << letters[i][j][k] << "\n";
//                 // cout << i << j << k;
//             }
//         }
//     }

//     return 0;
// }

// ------------------------------------------CALCULATING COMPOUND INTEREST----------------------------
// #include <iostream>

// using std::cin;
// using std::cout;
// using std::endl;

// #include <iomanip>

// using std::setiosflags;
// using std::setprecision;
// using std::setw;

// #include <cmath>

// int main()
// {
//     double amount,          // amount on deposit
//         principal = 1000.0, // starting principal
//         rate = .05;         // interest rate

//     cout << "Year " << setw(21) << "Amount on deposit" << endl;

//     // set floating-point number format
//     cout << setiosflags(std::ios::fixed | std::ios::showpoint) << setprecision(2);

//     for (int year = 1; year <= 10; year++)
//     {
//         amount = principal * pow(1.0 + rate, year);
//         cout << setw(4) << year << setw(21) << amount << endl;
//     }

//     return 0;
// }

// ---------------------------------FACTORIAL CALCULATOR------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     int number, multiplier;

//     cout << "What factorial do you want to solve: ";
//     cin >> number;
//     multiplier = number;

//     while (multiplier > 1) {
//         multiplier--;
//         number *= multiplier;
//     }

//     cout << "The factorial is " << number;
// }

// -------------------------------------FAILED AND PASSED STUDENTS---------------------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     int fail = 0;
//     int pass = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         int check;
//         cout << "Did this student pass? If yes input 1, If no input 2: ";
//         cin >> check;
//         if (check == 1)
//         {
//             pass++;
//         }
//         if (check == 2)
//         {
//             fail++;
//         }
//     }
//     cout << pass << " passed and " << fail << " failed.";

//     return 0;
// }

//---------------------------------------------CONTROL STRUCTURES(LOOP)------------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     // initialization, loopContinuationTest, increment/decrement  (statements)

//     // WHILE LOOP

//     // int cocoPops = 1;
//     // while (cocoPops <= 5)
//     // {
//     //     cout << "I just ate coco pops!!!\n";
//     //     cocoPops++;
//     // }

//     // DO WHILE LOOP

//     // int cocoPops = 1;
//     // do
//     // {
//     //     cout << cocoPops << "i just ate cocopops" << endl;
//     //     cocoPops++;

//     // } while (cocoPops <= 7);

//     // int cocoPops = 1;
//     // do
//     // {
//     //     cout << cocoPops << "i just ate cocopops" << endl;
//     //     cocoPops++;

//     // } while (false);

//     // FOR LOOP

//     // for (int items = 10; items >= 0; items--) {
//     //     cout << "I just bought the next item. There are " << items << " items left!\n";
//     // }

//     // int items;
//     // cout << "How many items are on your list? ";
//     // cin >> items;

//     // for (items; items >= 0; items--) {
//     //     cout << "I just bought the next item. There are " << items << " items left!\n";
//     // }

//     //MULTIPLICATION TABLE

//     // int table, result;
//     // cout << "What table do you want to get? ";
//     // cin >> table;

//     // for (int i = 1; i <= 12; i++) {
//     //     result = table * i;
//     //     cout << table << " * " << i << " = " << result << endl;
//     // }

//     // OUTPUT BINARY VALUE FROM 0 TO 7

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 2; k++) {
//                 cout << i << j << k << endl;
//             }
//         }
//     }
//     return 0;
// }

//---------------------------------------------PARAMETER PASSING MECHANISMS------------------------------------------------
// #include <iostream>

// using namespace std;

// int add(int val1, int val2);

// int main()
// {
//     int a, b;
//     cout << "Enter your first value: ";
//     cin >> a;
//     cout << "Enter your second value: ";
//     cin >> b;
//     int result = add(a, b);
//     cout << result;
//     return 0;
// }

// int add(int val1, int val2)
// {
//     return val1 + val2;
// }

// -----------------------------------------------OUTPUT ODD AND EVEN NUMBERS-------------------------------------
#include <iostream>

using namespace std;

int main()
{
    int value;

    cout << "Enter a value: ";
    cin >> value;

    for (int i = 1; i <= value; i++)
    {
        if (i % 2)
        {
            cout << "Odd: " << i << endl;
        }
        else
        {
            cout << "Even: " << i << endl;
        }
    }

    return 0;
}
