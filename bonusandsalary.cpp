#include <iostream>
using namespace std;
int main ()

// 19. bonus and salary -
// 0-10000 - 500+
// 10000-30000 = 1000+
// 30000-50000 = 3000+
// above 50000= 5000+

{
int num;
cout<<"Enter a number";
cin>>num;
if(num<=10000){
    cout<<num+500;}

else if(num>10000 && num<=30000){
    cout<<num+1000;}

else if(num>30000 && num<=50000){
    cout<<num+3000;}

else if(num>50000){
    cout<<num+5000;}    
   else {
            cout<<"Invalid";
        }
}

