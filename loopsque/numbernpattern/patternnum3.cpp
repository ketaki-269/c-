// Enter a number5
// 1    
// 23
// 456
// 78910 
// 1112131415

#include <iostream>
using namespace std;
int main()
{
    int num,a=1;
    cout<<"Enter a number";
    cin>>num;
    for(int r=1 ; r<=num ; r++)
    {

        for(int c=1 ; c<=num ; c++)
        {

            if(c<=r){ 
                cout<<a++ ;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}