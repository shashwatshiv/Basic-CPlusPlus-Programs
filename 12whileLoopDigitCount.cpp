#include <iostream>
using namespace std;
int main()
{//There are 3 types of loops in total: do while ,while,for.
    int num;
    cout << "NUMBER:" << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "Zero is Invalid" << endl;
    }
    else

    {
        if (num < 0)
        {
            num *= -1;
        }

        int counter = 0;
        while (num > 0)
        {
            num /= 10;
            counter++;
        }
        cout << "digits are/is " << counter << endl;
    }

    return 0;
}