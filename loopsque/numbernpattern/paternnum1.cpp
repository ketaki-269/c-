1    
12
123
1234
12345
#include <iostream>
using namespace std;
int main()
{
    for(int r=1 ; r<=5 ; r++)
    {

        for(int c=1 ; c<=5 ; c++)
        {

            if(c<=r){
                cout<<c;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}