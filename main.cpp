#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string decision, firstName, lastName;
  int age;
  bool glasses;
  char decision2; 

  ofstream outfile;
  outfile.open("results.txt");

  cout << "Hi, what is your first name?:";
  cin >> firstName;

  outfile << "First Name: " << firstName << endl;

  cout << "What is you last name?:";
  cin >> lastName;

  outfile << "Last Name: " << lastName << endl;

  cout << "How old are you?:";
  cin >> age;

  outfile << "Age: " << age << endl;

  cout << "Do you wear glasses? (Y/N):";
  cin >> decision2;

  if (decision2 == 'Y') 
  {
  glasses = true;
  }
  else if (decision2 == 'N')
  {
  glasses = false;  
  }
  
  outfile << "Use of glasses(0=No,1=Yes): " <<glasses << endl;

  do{
  cout << "Welcome, would you like to turn on colorblind settings? (Yes or No):";
  cin >> decision;
  if (decision == "yes") 
  {
    cout << "Colorblind setttings enabled" << endl;
    outfile << "Colorblind setttings: enabled" << endl;
  }
  else if (decision == "no") 
  {
    cout << "Regular settings: enabled" << endl;
    
    outfile << "Regular settings: enabled" << endl;
  }
  else {
    cout << "Please enter Yes or No." << endl;
  }
  }while (decision != "yes" && decision != "no");

  outfile.close();

  return 0;
}
