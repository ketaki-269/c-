
//count  the digit in number?

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) count = 1;
    else {
        num = abs(num); // to handle negative numbers
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    cout << "Number of digits: " << count;

}
