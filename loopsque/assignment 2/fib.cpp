#include <iostream>
using namespace std;
int main(){

    int num=1;

    printnumber: //label

    cout<<num<<" ";

    if(num<=10){
        num++;
        goto printnumber;
    }
     
}
