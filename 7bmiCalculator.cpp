#include <iostream>
using namespace std;
int main()
//BMI Calculator
//Fit if 18.5<bmi<24.5
//underweight if bmi < 18.5
// Overweight if bmi >24.5
{
    float m, h;
    float bmi;
    cout << "Enter your body weight in kg" << endl;
    cin >> m;

    cout << "Enter your height in cm" << endl;
    cin >> h;
    h /= 100;
    bmi = m / (h * h);
    cout << "Your BMI is " << bmi << endl;
    if (bmi < 18.5)
    {
        cout << "You are underweight" << endl;
    }
    else
    {
        if (bmi > 24.5)
        {
            cout << "You are overweight" << endl;
        }
        else
        {
            cout << "you are fit" << endl;
        }
    }
// a shorter method would be using else if statement, without nested loop
    return 0;
}