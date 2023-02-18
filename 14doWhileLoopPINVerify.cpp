#include <iostream>
using namespace std;
int main()
{   // in while loop conditions are checked first and then program is executed
    // but in do while loop program gets executed atleast one time and counter increases.
    int pin = 1234, epin, counter = 0;
    do
    {
        cout << "PIN:" << endl;
        cin >> epin;
        counter++;

    } while (counter < 3 && pin != epin);
    if (counter < 3)
    {
        cout << "Loading" << endl;
    }
    else
    {
        cout << "Blocked" << endl;
    }

    return 0;
}