// 2. Generate Fibonacci series up to a given term using loops. 
#include <iostream>
using namespace std;
int main()
{
    int num,fi=0,se=1;
    cout<<"Enter a Number:";
    cin>>num;

    cout <<fi<<" "<<se<<" ";

    for(int i = 1; i<=num-2; i++){
        int nx = fi+se;
        fi=se;
        se=nx;
        cout<<nx<<" ";
    }
}