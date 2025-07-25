#include <iostream>
using namespace std;
int main ()

// Q-21 Calculate the bill 
// 0-50 unit = 5 per unit
// 50-100 unit= 10 per unit
// 100- 150 unit = 15 per unit
// 150 - 200 unit = 20 per unit
// above 200 unit = 25 per unit 


{
int bill;
cout<<"Enter a unit";
cin>>bill;
if(bill>=0 && bill<=50){
    cout<<bill*5;}
else if(bill>50 && bill<=100){
    cout<<(bill*10)-250;}
else if(bill>100 && bill<=150){
    cout<<(bill*15)-750;}
else if(bill>150 && bill<=200){
    cout<<(bill*20)-2250;}
else if(bill>200){
    cout<<(bill*25)-5250;} 

    else{
        cout<<"Invaild";
    }


}



// q - income tax Calculator
// 0-10000 no tax
// 10000- 50000 2% tax
// 50000 - 1 lakh 5% tax
// 1 lakh - 5 lakh 8 % tax
// above 5 lakh 10% tax