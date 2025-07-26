#include <iostream>
using namespace std;
int main ()

// q - income tax Calculator
// 0-10000 no tax
// 10000- 50000 2% tax
// 50000 - 1 lakh 5% tax
// 1 lakh - 5 lakh 8 % tax
// above 5 lakh 10% tax

{
int num;
cout<<"Enter a number";
cin>>num;
if(num<=10000){
    cout<<num ;}

else if(num>10000 && num<=50000){
    cout<<num+(0.02*num);}
else if(num>50000 && num<=100000){
    cout<<num+(0.05*num) ;}

else if(num>100000 && num<=500000){
    cout<<num+(0.08*num)  ;}

else if(num>500000){
    cout<<num+(0.1*num) ;}    
   else {
            cout<<"Invalid";
        }
}


