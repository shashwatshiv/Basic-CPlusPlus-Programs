#include <iostream>
using namespace std;
int main()
// In For loop , intially ho w many times a loop is to be executed is not decided.
//  it is decided by user by giving input

{
    int number, i, x = 1;
    cout << "NUMBER:" << endl;
    cin >> number;
    for (i = 1; i <= number; i++)
    // i can be 1 or number at starting and can be incremented or decremented upto its counterpart
    //  ie. for(i=number; i>0; i--)
    {
        x = x * i;
    }
    cout << x << endl;
    return 0;
}