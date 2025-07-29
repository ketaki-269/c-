#include <iostream>
using namespace std;
int main ()

 // nesting  que-1

// enter amazon or other is Invalid
// then ask product or service
// if they click service thencout not available yet
// if the click product then cout shoes and clothes 
// if they choose shoes cout 1000
// or if the choose clothes cout 2000
 
{
  string website;
  cout <<"Enter website name:";
  cin>>website;

  if (website =="amazon" || website=="Amazon"){ 
    string option;
    cout<<"Enter product or service:";
    cin>>option;
    if (option=="product"){
      string productorder;
      cout<<"Enter shoes or clothes:";
      cin>>productorder;
      if(productorder=="shoes"){cout<<"1000";}
      else if (productorder=="clothes"){cout<<"2000";}
      else{cout<<"Invalid";}

    }
    else if (option =="service"){cout<<"Not available";}
   }
  
  else{
    cout<<"Invalid";
  }



}