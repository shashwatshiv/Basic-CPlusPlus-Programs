#include <iostream>
using namespace std;
int main()
{
    float grade, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        do
        {
            cout << "Enter Grade for Subject " << i + 1 << endl;
            cin >> grade;

        } while (grade > 5 || grade < 1);
        sum += grade;
    }
    cout << "Average Grade is " << sum / 3 << endl;
    return 0;
}