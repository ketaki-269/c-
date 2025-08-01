#include <iostream>
using namespace std;
int main()

{
    int num = 123;
    while(num>0){
        int digit = num%10;
        cout<<digit;
        num=num/10;
    }
}

