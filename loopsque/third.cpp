#include <iostream>
using namespace std;
int main()

{
    int num = 123;
    int reverse=0;
    while(num>0){
       int  digit = num%10;
        reverse=reverse*10+digit;
        num=num/10;
        
    }
    cout<<reverse;
   
}

//