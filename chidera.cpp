#include <iostream>

using namespace std;

int chidera ()
{
    int a, b, c, temp, temp2;
    cout << "Input your first value" <<endl;
    cin >> a;
    cout << "You entered " << a <<endl;
    cout << "Input your second value" << endl;
    cin >> b;
    cout << "You entered " << b << endl;
    cout << "Input your third value" << endl;
    cin >> c;
    cout << "You entered " << c << endl;

    if(a > b){
        temp = a;
        if (c > temp){
            temp = c;
        }
    }else if(b > a){
        temp = b;
        if(c > temp){
            temp = c;
        }
    }

    if(a < b){
        temp2 = a;
        if (c < temp2){
            temp2 = c;
        }
    }else if(b < a){
        temp2 = b;
        if(c < temp2){
            temp2 = c;
        }
    }

    cout << "The largest value is " << temp<< endl;
    cout << "The smallest value is " << temp2<< endl;
    return 0;
}
