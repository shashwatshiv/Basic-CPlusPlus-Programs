#include<iostream>
using namespace std;
int main()
//By taking 3 variables
{ int a = 5;
int b = 11;
int c;
c=a;
a=b;
b=c;
cout<<a<<endl;
cout<<b<<endl;
// By only 2 variables
int x = 7;
int y = 3;
 x=x+y;
 y=x-y;
 x=x-y;
 cout <<x<<endl;
 cout <<y<<endl;

    return 0;
}