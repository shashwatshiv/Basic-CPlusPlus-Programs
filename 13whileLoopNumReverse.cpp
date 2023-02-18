#include<iostream>
using namespace std;
int main()
{ int num,reverse=0;
cout<<"NUMBER:"<<endl;
cin>>num;
// This Commented Out program only works with positive numbers as it prints digits and not actually
// reverses the number thus it cannot be futher used in program.
// if (num==0)
// {cout<<" Cannot be Reversed";
// }
// else{
// while (num>0)
// {x = num%10;
// cout<<x;
// num /=10;
    
// }
// }
while (num!=0)
{ reverse *=10;
  reverse += num%10;
  num /=10;
    
}
cout<<reverse<<endl;
    return 0;
}