#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h, w;
    cout << "Enter h,w" << endl;
    cin >> h >> w;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
          if (i==1 || i==h ||j==1 ||j==w)
          
            cout<<"*";
          
          
        
          else cout<<" ";
    
        }
     cout<<endl;}

    return 0;
}