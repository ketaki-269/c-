#include <iostream>
using namespace std;
int main ()
//ternary operators

//  find the number is divisible by 10 or not ?
// {
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     (num%10==0)?cout<<"Divisible" :cout<<" Not Divisible";
// }

//Check the givenn password is correct or not ?(password-1234)
// {
//     int password;
//     cout<<"Enter a Password";
//     cin>>password;
//     (password==1234)?cout<<"Correct Password":cout<<"Incorrect Password";  
// }

//  Check the number is positive or negative
// {
//     int num;
//     cout<<"Enter is Number";
//     cin>>num;
//     (num>=0)?cout<<"Positve":cout<<"Negative";
// }

//Check the person is eligiable for vote or not ?
// {
//     int num;
//     cout<<"Enter age ";
//     cin>>num;
//     (num>=18)?cout<<"Eligiable":cout<<"Not Eligiable";
// }

//Check the number is divisible by 2 and 4 both? 
// {
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     (num%2==0 && num%4==0)?cout<<"Divisible" :cout<<" Not Divisible";
// }

//Check the number is between 0-50?
// {
//     int num;
//     cout<<"Enter a number ";
//     cin>>num;
//     (num<=50)?cout<<"Between":cout<<"Not between";          

// }

//Check the year is leap year or not?
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ?
        cout << year << " is a Leap Year." : cout << year << " is NOT a Leap Year.";
}

//Check the givenn character is vowel or constant?
// {
//     char character;
//     cout<<"Enter a character";
//     cin>>character;
//     (character == 'a' || 'e' || 'i' || 'o' || 'u' )?cout<<"Vowel":cout<<"Constant";
// }
