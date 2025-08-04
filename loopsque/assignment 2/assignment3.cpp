// WAP to print the first 10 natural numbers using a loop.  
// #include <iostream>
// using namespace std ;
// int main()
// {
//     for ( int i=1; i<=10;i++){
//     cout<<i;
//     }

// }

// WAP to calculate the factorial of a number using a for loop. 
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num,result=1;
//   cout<<"Enter number :";
//   cin>>num;

//   for (int i = 1; i<=num; i++ ){
//  result=result*i;
//   }
//   cout<<result;
// }

// WAP to find the sum of the first N natural numbers using a while loop.
// #include <iostream>
// using namespace std;
// int main()
// {
//    int num, sum = 0 ,i= 1;

//     cout << "Enter Number: ";
//     cin >> num;

//     while ( i <= num) {
//         sum = sum + i;  
//         i++;           
//     }
//     cout << sum;
// }

// 4. WAP to find all numbers divisible by 3 and 5 within a range. 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int range ;
//     cout<<"Enter range :";
//     cin>>range;

//  for (int i = 1;i <= range;++i) {
//         if (i % 3 == 0 && i %5==0) {
//             cout <<i <<endl;
//          } 
//     }
// }

// 5. WAP to calculate the sum of squares of the first N natural numbers. 
// #include <iostream>
// using namespace std;
// int main()
// {
//    int num, sum = 0 ,i= 1;
//     cout << "Enter Number: ";
//     cin >> num;
//     while ( i <= num) {
//         sum += i* i;  
//         i++;           
//     }
//     cout << sum;
// }

// 6. WAP print the multiplication table of a number. 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number of table:";
//     cin>>num;
//     for (int i = 1; i <= 10; ++i) {
//         cout << num << " * " << i << " = " << num * i << endl;
//     }
// }

// 7. WAP to check if a number is a prime number. 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, count=0;
//     cout <<"Enter number:";
//     cin>>num;
   
//     for (int i  = 1; i <= num ; i++ ){
//       if(num % i ==0){
//       count++;
//       }
//     }
//  if (count == 2)
//         cout << "Prime"<< endl;
//     else
//         cout << "Not a Prime " << endl;    
// }

// 8. WAP to reverse a number?
#include <iostream>
using namespace std;
int main()
{
     int num ;
     cout<<"Enter number:";
     cin>>num;
    while(num>0){
        int digit = num%10;
        cout<<digit<<endl;
      num=num/10;
    }
}