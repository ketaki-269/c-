// 4. Print all prime numbers within a given range. 
#include <iostream>   
using namespace std;   

int main() 
{
    int start, end;    
    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        int count = 0;  

       
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0) {  
                count++;
            }
        }

        if (count == 2)
        {
            cout << num << " "; 
        }
    }

}
