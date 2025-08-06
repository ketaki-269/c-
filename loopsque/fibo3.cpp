#include <iostream>
using namespace std;
int main()
{
    int num,fi=0,se=1;
    cout<<"Enter a Number:";
    cin>>num;

     for(int i = 1; i<=num-2; i++){
        if (i==1){
            cout<<fi<<" ";
            continue;
        }
        if (i==2){
            cout<<se<<" ";
            continue;
        }
        int nx =fi+se;
        fi=se;
        se=nx;
        cout<<nx<<" ";
}
}