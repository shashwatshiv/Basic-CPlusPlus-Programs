#include <iostream>
using namespace std;
int main()
{//Program for nested if else statement
    int side1, side2, side3;
    cout << "Enter 3 sides" << endl;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2, side2 == side3)
    {
        cout << "Equilateral";
    }
    else
    {
        if (side1 != side2 && side2 != side3 && side1 != side3)
        {
            cout << "Scalene" << endl;
        }
        else
        {
            cout << "Isosceles";
        }
    }
    /* && is used as and of set theory,this program can also developed by 
using else if function as well between if and else */
    return 0;
}