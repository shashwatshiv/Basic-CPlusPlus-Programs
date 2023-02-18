#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int h;
char s;
cout<<"enter Height ANd Weight:"<<endl;
cin>>h;
cout<<"enter symbol"<<endl;
cin>>s;
cout<<endl;
for (int i = 1; i <= h ; i++)
{
    for (int j = 1; j <=i; j++)
    {
        cout<<setw(2)<<s;
    }
    
    cout<<endl;
}
cout<<endl;
//INVERTED TRIANGLE
for (int i = h; i >0 ; i--)
{
    for (int j = i; j>0; j--)
    {
        cout<<setw(2)<<s;
    }
    
    cout<<endl;
}
    return 0;
}