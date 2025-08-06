#include <iostream>
using namesapce std;
int main()
{
    int a, b;
    cin>>a>>b;
    int mx=(a>b)?cout<<a:cout<<b;
  int  lcm = mx;
    while(1){
        if(mx%a==0 && mx%b==0){
            break;
        }
        mx+=0;
    }
    cout<<mx;
}