// 3. Create a program to calculate the power of a number using loops. 
#include <iostream>
using namespace std;
int main()
{
    int num, power, result =1;
    cout <<"Enter number:";
    cin>>num;
    cout <<"Enter power:";
    cin>>power;

    for (int i  = 1; i <= power ; ++i ){
        result = result*num;
    }
    cout<<result;
 }