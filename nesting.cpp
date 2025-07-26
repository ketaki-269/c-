#include <iostream>
using namespace std;
int main ()

 // nesting  
 
// enter amazon or other is Invalid
// then ask product or service
// if they click service thencout not available yet
// if the click product then cout shoes and clothes 
// if they choose shoes cout 1000
// or if the choose clothes cout 2000

{
 string website;
 cout<<"Enter website name";
 cin>>website;

 if (website=="amazon" ){

    string option;
    cout<<"Enter product or service:";
    cin>>option;
    
    if(option =="product"){

   string order;
   cout<<"Enter your shoes or clothes ";
   cin>>"order";

   if (order== " shoes"){ cout<<"1000";}
   elseif (order==" clothes";){ cout<<"2000"  ;}

     else( cout<<"Invalid";)

    else if (option == "servise"){
        cout<<"Not available" };
         else{ cout<<"Invalid"};



}
 }

          else{ cout<<"Invalid"};

}





