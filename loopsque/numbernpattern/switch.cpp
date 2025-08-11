#include <iostream>
using namespace std;
int main(){
   
    int x;
    cout<<"Enter a Number: ";
    cin>>x;

    switch(x + x)
    {
        
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        default:
        cout<<"Invalid";

    }

}