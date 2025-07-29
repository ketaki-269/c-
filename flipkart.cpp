#include <iostream>
using namespace std;
int main ()
//nesting  que -3
{
  string website;
  cout <<"Enter website name:";
  cin>>website;

  if (website =="flipkart" || website=="Flipkart"){ 
    string option;
    cout<<"Enter product or service:";
    cin>>option;

    if (option=="product"){
      string select;
      cout<<"Enter Men or Women:";
      cin>>select;
      if(select=="Men" || select=="men"){
        string productordermen;
      cout<<"Enter shoes or clothes:";
      cin>>productordermen;
      if(productordermen=="shoes"){cout<<"1000";}
      else if (productordermen=="clothes"){cout<<"2000";}
      else{cout<<"Invalid";}
      }

      else if (select=="Women"){
         string productorderwomen;
      cout<<"Enter jewellery or clothes:";
      cin>>productorderwomen;
      if(productorderwomen=="jewellery"){cout<<"100000";}
      else if (productorderwomen=="clothes"){cout<<"2000";}
      else{cout<<"Invalid";}
      }

      else{cout<<"Invalid";}

    }
    else if (option =="service"){cout<<"Not available";}
   }

  else{
    cout<<"Invalid";}



}