#include<iostream>
#include <iomanip>
//iomanip at be used to set space between symbol
using namespace std;
int main()
{int h,w;
cout<<"Enter Height and Width:"<<endl;
cin>>h>>w;
char sym;
cout<<"Enter Symbol"<<endl;
cin>>sym;
for (int i = 0; i <h; i++)
{
    for ( int i = 1; i <= w; i++)
    {
        cout<<setw(3)<<sym;
    
    }
    cout<<endl;
}

    return 0;
}