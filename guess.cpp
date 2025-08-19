#include <iostream>
using namespace std;
int main()
{
    int  guess,number = 8;
    cout <<" Guess the number under 10 : ";
        cin>>guess;

        if (guess== number){
            cout<<"You guessed right"<<endl;
        }
        else if (guess< number ){
            cout <<"Too low ,try a bigger number"<<endl;
        }
            else{
               cout <<"Too high ,try a smaller number"<<endl;

            }
        
}