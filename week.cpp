// Q20 Print day of week given by user (1-7)?
// 1-monday
// 2-tuesday
// 3-wednesday
// 4-thrusday
// 5-friday
// 6-saturday
// 7-sunday

#include <iostream>
using namespace std;
int main ()

{
int num;
cout<<"Enter a number";
cin>>num;
 if(num==1){
    cout<<"Monday";}
    else if(num==2){
    cout<<"Tuesday";}
  else if(num==3){
    cout<<"Wednesday";}
     else if(num==4){
    cout<<"Thrusday";} 
     else if(num==5){
    cout<<"Friday";}
     else if(num==6){
    cout<<"Saturday";}  
     else if(num==7){
    cout<<"Sunday";}
    else{
        cout<<"Invaild";
    }

}
