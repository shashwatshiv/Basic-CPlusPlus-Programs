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
        bool num1check, num2check;
        num1check = (num1 == int(num1));
        num2check = (num2 == int(num2));
        if (num1check && num2check)
        {
            cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
        }
        else
        {
            cout << "Invalid Operation!";
        }
        break;
    default:
        cout << "Fuck You";
    }
        return 0;
    }