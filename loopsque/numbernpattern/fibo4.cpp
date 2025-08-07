#include <iostream>
using namesapce std;
int main()
{
    int num,fi=0,se=1;
    cout<<"Enter a number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<fi<<" ";
        int nx = fi+se;
        fi=se;
        se=nx;
    }
}