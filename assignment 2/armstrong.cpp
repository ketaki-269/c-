// Write a program to check whether a number is an Armstrong number or not. 
#include <iostream>
using namespace std;

int main() {
    int num, real, result = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    real = num;

   
    while (originalNum != 0) {
        remainder = originalNum % 10;      // extract last digit
        result += remainder * remainder * remainder; // cube it and add
        originalNum /= 10;                // remove last digit
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

}