#include <iostream>
using namespace std;
int main ()
//nestong que-2

{
string bank;
  cout<<"Enter Bank name: ";
  cin >>bank;

  int balance = 1000;

   if (bank =="sbi" || bank =="SBI"){
    int pin;
    cout<<"Enter Pin:" ;
    cin>>pin;
    if (pin==1234){
        string option;
        cout<<"Enter Deposite Withdrawl Balance_cheque:";
        cin>>option;
        if(option =="Withdrawl" || option =="withdrawl"){
            int amt;
            cout<<"Enter withdrawl amount:";
            cin>>amt;
            if (amt>0 && amt<=balance){cout<<"After withdrawl:"<<balance-amt;}

            else{ cout<<"Not enough balance";}

        }
        else if(option=="Deposite" || option=="deposite"){
            int amt;
            cout<<"Enter deposite amount:";
            cin>>amt;
            if(amt>0){
                cout<<"After Deposite:"<<balance+amt;}
            else {
                cout<<"Invalid amount";}
        }
        else if (option == "Balance_cheque" || option == "Balance_cheque"){cout<<balance;}
        else{cout<<"Wrong option";}

    }
    else{cout<<"Wrong pin";}
   } 
   
   else { cout<<"Invalid";}


}