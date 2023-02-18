#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;
    cout << "AxeEdge Calculator" << endl;
    cout << "Enter Calculation" << endl;
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
    case '-':
        cout << num1 << operation << num2 << "=" << num1 - num2;
        break;
    case '+':
        cout << num1 << operation << num2 << "=" << num1 + num2;
        break;
    case '*':
        cout << num1 << operation << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << operation << num2 << "=" << num1 / num2;
        break;
    case '%':
        float f;
        f = num1 - int(num1);
        if (f == 0)
        {
            float e;
            e = num2 - int(num2);
            if (e == 0)
            {
                cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
            }
            else
            {
                cout << "Operation is invalid";
                break;
            }
        }
        else
        {
            cout << "Operation is Invalid";
            break;
        }

    default:
        break;
    }
    
    return 0;
}