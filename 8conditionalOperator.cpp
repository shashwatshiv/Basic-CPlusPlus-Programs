#include <iostream>
using namespace std;
int main()
{
    //Guessing Game using if else statement
    int hostUserNum, guestUserNum;
    cout << "Host:" << endl;
    cin >> hostUserNum;
    // system("cls") clears the screen
    system("cls");
    cout << "Guest:" << endl;
    cin >> guestUserNum;
    /* if (hostUserNum == guestUserNum)
    {
        cout << "Passed" << endl;
    }
    else
        {
        cout << "Failed" << endl;
    } */

    //By condtional Operator or ternary Opreator
    // uses ? and : as if and else repectively
    (hostUserNum == guestUserNum) ? cout << "Passed" : cout << "Failed" << endl;

    return 0;
}