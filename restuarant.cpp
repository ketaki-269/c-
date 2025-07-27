#include <iostream>
using namespace std;
int main ()
//nesting  que -4
{
  string restaurant;
  cout <<"Enter Restaurants name:";
  cin>>restaurant;

  if (restaurant =="Page-3" || restaurant=="page-3"){ 
    string option;
    cout<<"Enter Veg or Nonveg:";
    cin>>option;

    if(option == "Veg" || option == "veg"){
        string orderveg;
      cout<<"Order Breakfast  Lunch or Dinner:";
      cin>>orderveg;
      if(orderveg=="Breakfast" ||orderveg=="breakfast"){
        string orderbreakfast;
      cout<<"Enter samosa  poha:";
      cin>>orderbreakfast;
      if(orderbreakfast=="poha"){cout<<"30";}
      else if (orderbreakfast=="samosa"){cout<<"15";}
      else{cout<<"Invalid";}


      }
      else if (orderveg=="Lunch" ||orderveg=="lunch"){
         string orderlunch;
      cout<<"Enter Thali  Buffer:";
      cin>>orderlunch;
      if(orderlunch=="Thali"){cout<<"300";}
      else if (orderlunch=="Buffer"){cout<<"1500";}
      else{cout<<"Invalid";}
      }
      else if (orderveg=="Dinner" ||orderveg=="dinner"){
          string orderdinner;
      cout<<"Enter Thali Desserts:";
      cin>>orderdinner;
      if(orderdinner=="Thali"){cout<<"300";}
      else if (orderdinner=="desserts"){cout<<"1000";}
      else{cout<<"Invalid";}
      }
      else{cout<<"Invalid";}}
    else if(option == "Nonveg" ||option == "nonveg"){cout<<"Not Available";}
}

else{cout<<"Invalid";}
}