// 5. Print all Armstrong numbers within a range.

#include <iostream>
using namespace std;

int main() 
{
    int num, range;

    cout << "Enter start: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;

    for (int i = num; i <= range; i++) {
        int real = i;
        int result = 0;
        int remainder;

        for (int temp = real; temp != 0; temp /= 10) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
        }

        if (result == i)
            cout << i << " is Armstrong number." << endl;
    }

    return 0;
}
