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

// Check the givenn password is correct or not ?(password-1234)
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

// Check the person is eligiable for vote or not ?
// {
//     int num;
//     cout<<"Enter age ";
//     cin>>num;
//     (num>=18)?cout<<"Eligiable":cout<<"Not Eligiable";
// }

// Check the number is divisible by 2 and 4 both? 
// {
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     (num%2==0 && num%4==0)?cout<<"Divisible" :cout<<" Not Divisible";
// }

// Check the number is between 0-50?
// {
//     int num;
//     cout<<"Enter a number ";
//     cin>>num;
//     (num<=50)?cout<<"Between":cout<<"Not between";          

// }

// Check the year is leap year or not?
// if the year is divisible by 4 then its a leap year.
// and if the year is divisible by both 4 and 100 then its not a leap year
// But the year is divisible by 4,100 and 400 then it is leap year

// basic concept - har 4 sal me ata hai toh 4 se divide hojainga
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     (year%4==0)?cout << year << " is a Leap Year." : cout << year << " is NOT a Leap Year.";
// }

// har tarike ke number  ko input lene ke liye ye code 
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     ((year % 400 == 0 && year % 4==0  && year % 100==0) || (year % 4 == 0 && year % 100 != 0)) ?
//         cout << year << " is a Leap Year." : cout << year << " is NOT a Leap Year.";
// }



// Check the givenn character is vowel or constant?
// {
//     char character;
//     cout<<"Enter a character" ;
//     cin>>character;
//     (character == 'a' || character == 'e' || character =='i' ||character == 'o' || character =='u' || character == 'A' || character == 'E' || character =='I' ||character == 'O' || character =='U'
// )?cout<<"Vowel":cout<<"Constant";
// }   

// 22-07-2025

// Check the ATM pin is correct or not (pin is 1234)?
// {
//     int password;
//     cout<<"Enter a ATM Password";
//     cin>>password;
//     (password==1234)?cout<<"Correct Password":cout<<"Incorrect Password";  
// }
// Check the person is pass or fail (passing marks is 33)?
// {
//     int num;
//     cout<<"Enter a number ";
//     cin>>num;
//     (num<=33)?cout<<"Fail":cout<<"Pass";          
// }

// Check the number is divisible by 2 and above 50?

{
    int num;
    cout<<"Enter a number";
    cin>>num;
    (num%2==0 && num>50)?cout<<"Divisible" :cout<<" Not Divisible";
}
// Check the value is divisible  8 and 10 or not?
// {
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     (num%8==0 && num%10==0)?cout<<"Divisible" :cout<<" Not Divisible";
// }
// Check the value is between 50-100?
// {
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     (num>=50 && num<=100)?cout<<"InBetween":cout<<"Not Between";
// }

// check the greatest between three numbers?
// In this code we use ternary operator inside ternary operators 
// {
//     int a,b,c;
//     cout<<"Enter a Number: ";
//     cin>>a;
//     cout<<"Enter a Number: ";
//     cin>>b;
//     cout<<"Enter a Number: ";
//     cin>>c;
//     (a>b && a>c)?cout<<a:(b>a && b>c)?cout<<b:cout<<c;
// }

// check the smallest between three numbers?
// In this code we use ternary operator inside ternary operators 
// {
//     int a,b,c;
//     cout<<"Enter a Number: ";
//     cin>>a;
//     cout<<"Enter a Number: ";
//     cin>>b;
//     cout<<"Enter a Number: ";
//     cin>>c;
//     (a<b && a<c)?cout<<a:(b<a && b<c)?cout<<b:cout<<c;
// }



// As in this code we have to apply multiple conditions and it may give error, so toh resolve this we use if else 