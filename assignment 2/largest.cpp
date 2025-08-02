// Write a program to find the largest digit in a given number. 
#include <iostream>
using namespace std;

int main() 
{
    int num, max = 0;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0)
    {
        int digit = num%10;
        if(digit > max){
            max=digit;

        }
        num/=10;
       
    }
     cout<<max;
}


