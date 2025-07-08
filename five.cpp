#include <iostream> 
#include <limits>
#include <climits>
using namespace std ;

int main(){
    
    //void -> empty data type (mostely used with functions)
    
    //Address-> variable   we use &-> ampersent or address of

    int a=10;
    cout<<&a<<endl;

    int b=20;
    cout<<&b<<endl;

    //size-> datatype
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;

    //limit-> datatype

    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;
    
    cout<<numeric_limits<float>::max()<<endl;
    cout<<numeric_limits<float>::min()<<endl;
    
    cout<<numeric_limits<bool>::max()<<endl;
    cout<<numeric_limits<bool>::min()<<endl;
//climits - we use this for mostly char as limit do not works for char properly 
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;

}