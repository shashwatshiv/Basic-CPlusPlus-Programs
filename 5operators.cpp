#include <iostream>
using namespace std;
int main()
{ //in order to perform decimal calculations ,instead of writing eg. 5 write it as 5.0, in atleast on of value
    // ++ is increment operator and -- is decrement operator.
    cout << 5 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 2 << endl;
    cout << 5 / 2 << endl;
    cout << 5.0 / 2 << endl;
    cout << 5.0 / 2.0 << endl;
    cout << "Increment and decrement" << endl;
    int counter = 6;
    //post increment
    cout << counter++ << endl;
    //pre incremant
    cout << ++counter << endl;
    //post decrement
    cout << counter-- << endl;
    cout << counter << endl;
    //pre decrement
    cout << --counter << endl;
    //Relational Operators
    // <,>,<=,>=,!=,==
    cout << (5 > 2) << endl;
    cout << (5 < 2) << endl;
    cout << (5 != 2) << endl;

    //LOGICAL OPERATORS
    //&& and, || or , ! not
    cout << (5 < 2 && 4 > 3) << endl;
    cout << (3 == 3 || 9 > 1) << endl;
    cout << !(4 > 1 && 4 == 4) << endl;
    //arthematic > relational >logical>assignment
    //ASSIGNMENT VARIABLE
    // =,+=,-=,*=,/=
    int a = 10;
    cout << (a += 5) << endl;
    cout << (a -= 5) << endl;
    cout << (a *= 5) << endl;
    cout << (a /= 5) << endl;

    return 0;
}