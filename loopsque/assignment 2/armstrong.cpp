// Write a program to check whether a number is an Armstrong number or not. 
#include <iostream>
using namespace std;

int main() {
    int num, real, result = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    real = num;

   
    while (real != 0) {
        remainder = real % 10;    
        result += remainder * remainder * remainder; 
        real /= 10;  
    }

    if (result == num)
        cout << num << "  Armstrong number." << endl;
    else
        cout << num << " Not  Armstrong number." << endl;

}