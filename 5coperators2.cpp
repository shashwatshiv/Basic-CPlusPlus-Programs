#include<iostream>
using namespace std;
int main()
{int a=5, b=4;
cout<< a+ (b++)<<endl;
cout <<(--a)+b<<endl;
cout <<!(true && false) << endl;
cout <<(true && false || true)<< endl;
int x=7;
cout <<(++x <=9 && x+2 >= 10)<<endl;
int y= 3;
cout <<(y == y++)<< endl;
int z=8;
cout <<(z+=2)<<endl;
cout <<(z/=2) << endl;
    return 0;
}