#include <iostream>
using namespace std ;
int main()
{
    int  i,ans=0;
    for( i=1 ; i<=10 ;i++){
        if (i%2 ==0 ){
           ans=ans+i;
           cout<<ans<<endl;
        }
        
    }
}