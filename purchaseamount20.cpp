#include <iostream>
using namespace std;
int main ()


// 18  Calculate the discount on purchase amount?
// 0-500=2%
// 500-100=5%
// 1000-5000=8%
// 5000-10000=10%
// above 10000=15%

// num=500 so num-(num*2/100)
{
int num;
cout<<"Enter a number";
cin>>num;
if(num<=500){
    cout<<num-(num*2/100);}

else if(num>=500 && num<=1000){
    cout<<num-(num*5/100);}

else if(num>1000 && num<=5000){
    cout<<num-(num*8/100);}

else if(num>5000 && num<=10000){
    cout<<num-(num*10/100);}

else if(num>10000){
    cout<<num-(num*15/100);}    
   else {
            cout<<"Invalid";
        }
}


// 19. bonus and salary -
0-10000 - 500+
10000-30000 = 1000+
30000-50000 = 3000+
above 50000= 5000+
