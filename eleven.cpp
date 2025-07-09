#include <iostream>
using namespace std;
//Logical  operator

// except 0 all values are true even negative values also 
int main()
// {
//    cout<<(1&&0)<<endl;
//    cout<<(1&&1)<<endl;
//    cout<<(21&&77)<<endl;
//    cout<<(1||0)<<endl;
//    cout<<(!60)<<endl;
// }

{ 
    int a=10;
    int b=200;
    int c=70;

    cout<<( a>b && a>c)<<endl;
    cout<<( b>a && b>c)<<endl;
    cout<<( c>b && c>b)<<endl;
     cout<<( a>b || a>c)<<endl;
    cout<<( b>a || b>c)<<endl;
    cout<<( c>b || c>b)<<endl;
}