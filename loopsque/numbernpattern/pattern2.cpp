//pattern abc
#include <iostream>
using namespace std;
int main()
{

    int num,a=1;
    cout<<"Enter a Number: ";
    cin>>num;

    for(int r=1 ; r<=num ; r++){

        for(int c=1 ; c<=num ; c++)
        {

            if(c<=r){
                cout<<char(64+a);
                a++;
            }
            else{cout<<"  ";
            } 
            }
        cout<<endl;
    }

    for( int i=0 ; i<=127 ;i++)
    {
        cout<<"The Ascii value of "<<i<<" is "<<char(i)<<endl;
    }
}