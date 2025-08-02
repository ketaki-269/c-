
#include <iostream>
using namespace std;

int main() {
    int num, real, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    real = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (real == reversed)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

}