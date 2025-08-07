#include <iostream>
using namespace std;
int main()
{
    int a, b , mx;
    cin>>a>>b;
   (mx=a>b)?cout<<a:cout<<b;
   int l = mx;
    while(1){
        if(mx%a==0 && mx%b==0){
            break;
        }
        mx+=0;
    }
    cout<<mx;
}