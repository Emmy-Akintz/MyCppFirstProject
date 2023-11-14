#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Input your first value" <<endl;
    cin >> a;
    cout << "You entered " << a <<endl;
    cout << "Input your second value" << endl;
    cin >> b;
    cout << "You entered " << b << endl;
    cout << "Input your third value" << endl;
    cin >> c;
    cout << "You entered " << c << endl;

    int largestNum, smallestNum;
    if (a >= b && a >= c) {
        largestNum = a;
        if (b <= c)
            smallestNum = b;
        else
            smallestNum = c;
    }
    else if (b >= a && b >= c) {
        largestNum = b;
        if (a <= c)
            smallestNum = a;
        else
            smallestNum = c;
    }
    else {
        largestNum = c;
        if (a <= b)
            smallestNum = a;
        else
            smallestNum = b;
    }

    // int largestNum = max(a, max(b, c))
    // int smallestNum = min(a, min(b, c))

    cout << "The largest value is " << largestNum << endl;
    cout << "The smallest value is " << smallestNum << endl;
    return 0;
}
