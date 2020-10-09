#include <iostream>

using namespace std;

int main()
{
  string decision;
  
  do{
  cout << "Welcome, would you like to turn on colorblind settings? (Yes or No):";
  cin >> decision;
  }while (decision != "yes" && decision != "no");

  
  if (decision == "yes") 
  {
    cout << "Colorblind setttings enabled" << endl;
  }
  else if (decision == "no") 
  {
    cout << "Regular settings enabled" << endl;
  }

  
  return 0;
}
