#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "user.h"
using namespace std;

int main()
{
  vector<string>answerVector;
  user test;

  string answer, decision, firstName, lastName, imageColor1, imageColor2, imageColor3;
  int age;
  bool glasses;
  char decision2;


  ofstream outfile;
  outfile.open("results.txt");

  cout << "Hi, what is your first name?:";
  cin >> firstName;
  test.setFirstName(firstName);

  outfile << "First Name: " << test.getFirstName()<< endl;

  cout << "What is your last name?:";
  cin >> lastName;
  test.setLastName(lastName);

  outfile << "Last Name: " << test.getLastName() << endl;

  cout << "How old are you?:";
  cin >> age;
  test.setAge(age);

  outfile << "Age: " << test.getAge() << endl;

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
  test.setGlasses(glasses);

  outfile << "Use of glasses(0=No,1=Yes): " <<test.getGlasses() << endl;

  cout << "Please open file userimage.bmp. Do you see the color red?(Yes/No)" << endl;
  cin >> imageColor1;

  if (imageColor1 == "Yes"){
    cout << "Correct" << endl;
  }
  else if (imageColor1 == "No") {
    cout << "Incorrect. May need to turn on colorblind settings." << endl;
  }

  cout << "Do you see the color green?(Yes/No)" << endl;
  cin >> imageColor2;

  if (imageColor2 == "Yes"){
    cout << "Correct" << endl;
  }
  else if (imageColor2 == "No"){
    cout << "Incorrect. May need to turn on colorblind settings." << endl;
  }
  cout << "Do you see the color blue?(Yes/No)" << endl;
  cin >> imageColor3;

  if (imageColor3 == "Yes"){
    cout << "Correct" << endl;
  }
  else if (imageColor3 == "No"){
    cout << "Incorrect. May need to turn on colorblind settings." << endl;
  }
  do{
    cout << "Welcome, would you like to turn on colorblind settings for userimage.bmp? (Yes or No):";
    cin >> decision;
  if (decision == "Yes" || decision == "yes") 
  {
    cout << "Colorblind setttings enabled" << endl;
  }
  else if (decision == "No" || decision == "no") 
  {
    cout << "Regular settings: enabled" << endl;
    
  }
  else {
    cout << "Please enter Yes or No." << endl;
  }
  }while (decision != "Yes" && decision != "yes" &&       decision != "No" && decision != "no");

    test.setColorBlindSetting(decision);
    outfile << "Are color blind settings enabled: " << test.getColorBlindSetting()<< endl;

  outfile.close();
    cout << "Thank you for answering the questions, your results are in the results.txt file." << endl;
  
    cout << "Does color blindness run in the family?(Y or N)" << endl;
    cin >> answer;
  if (answer == "Y") {
    string formatttedAnswer= "Yes color blindess runs in the family";
    answerVector.push_back(formatttedAnswer);
  }
   cout << "Yes, color blindness runs in the family ";

  for(int i=0; i < answerVector.size(); i++)
   cout << answerVector[i] << ' ';
  
  return 0;
}
