#include <iostream>
using namespace std;
int main()
{
    char c1, c2, c3, c4;
    int n1, n2, n3, n4;
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << "Enter a 4 digit letter" << endl;
    cin >> c1 >> c2 >> c3 >> c4;
    cout << "ASCII Code is " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << endl;
    cout << "Enter ascii code of four letters with space between them" << endl;
    // Casting Function//
    cin >> n1 >> n2 >> n3 >> n4;
    // cin>>n1;
    // cin>>n2;
    // cin>>n3;
    // cin>>n4;
    cout << "deciphered code is " << char(n1) << char(n2) << char(n3) << char(n4) << endl;

    return 0;
}