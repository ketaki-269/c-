#include <iostream>
using namespace std;
int main() 
// max {
//     int num, max = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while(num != 0)
//     {
//         int digit =num%10;
//         if(digit>max){
//             max=digit;}
//         num/=10;}
//      cout<<max;}
min {
    int num, min=num  ;
    cout << "Enter a number: ";
    cin >> num;
    while(num != 0)
    {
        int digit =num%10;
        if(digit < min){
           min=digit;}
        num/=10;}
    cout<<min;
}