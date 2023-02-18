#include <iostream>
using namespace std;
int main()
{
    int lt;
    cout << "Enter Last Number" << endl;
    cin >> lt;
    for (int l = 1; l <= lt; l++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << l << " x " << i << " = " << l * i << endl;
        }
        cout << endl;
    }

    return 0;
}