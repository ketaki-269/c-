// Write a program to check whether a number is an Armstrong number or not. 
#include <iostream>
using namespace std;

int main() 

// {
//     int num, real, result = 0, remainder;
//     cout << "Enter a number: ";
//     cin >> num;
//     real = num;
//     while (real != 0) {
//         remainder = real % 10;    
//         result += remainder * remainder * remainder; 
//         real /= 10;  
//     }
//     if (result == num)
//         cout << num << " is Armstrong number." << endl;
//     else
//         cout << num << "is  Not  Armstrong number." << endl;
// }

// WAP a program for power of a number.
//  {
//     int num, power, result =1;
//     cout <<"Enter number:";
//     cin>>num;
//     cout <<"Enter power:";
//     cin>>power;

//     for (int i  = 1; i <= power ; ++i ){
//         result = result*num;
//     }
//     cout<<result;
//  }
// isko kahan declare kerna hi ?? 


{
    int num, count=0;
    cout <<"Enter number:";
    cin>>num;
   
    for (int i  = 1; i <= num ; i++ ){
      if(num % i ==0){
      count++;
      }
    }
 if (count == 2)
        cout << "Prime"<< endl;
    else
        cout << "Not a Prime " << endl;    

 }