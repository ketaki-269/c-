#include <iostream>
using namespace std;
int main ()

// 17. Create a calculator using if else if? 
{
int num1 ,num2;
cout<<"Enter a number";
cin>>num1;
cout<<"Enter a number";
cin>>num2;
char op;
cout<<"Enter Operator";
cin>>op;
if(op=='+'){
    cout<<num1+num2;}

else if(op=='-'){
    cout<<num1-num2;
}

else if(op=='*'){
      cout<<num1*num2;
    }

else if(op=='/'){
        cout<<num1 / num2;
    }

else if(op=='%'){
        cout<<num1%num2;
    }
        else {
            cout<<"Invalid";
        }

}

