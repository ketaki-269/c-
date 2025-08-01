#include <iostream>
using namespace std;
int main(){
 


//WAP   to print the multiplication table of 2 from i 1-10?
int num = 2;  
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

//WAP to print table of number by taking uer input?
int num;
cout<<"Enter number ";
cin>>num;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

//WAP to print number divisible by 5 between 10-20?

 for (int i = 10;i <= 20;++i) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;








}