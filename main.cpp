#include <iostream>
#include <fstream>
#include <vector>
#include "libraries/bitmap.h"
using namespace std;

int main()
{
  Bitmap image;
  vector <vector <Pixel> > bmp;
  Pixel rgb;

  //read a file example.bmp and convert it to a pixel matrix
  image.open("bmp_24.bmp");

  //verify that the file opened was a valid image
  bool validBmp = image.isImage();

  if( validBmp == true )
  {
    bmp = image.toPixelMatrix();
  

    //take all the redness out of the top-left pixel
    rgb = bmp[0][0];
    rgb.red = 0; 

    //put changed image back into matrix, update the bitmap and save it
    bmp[0][0] = rgb;
    image.fromPixelMatrix(bmp);
    image.save("example.bmp");
  }
  /*
  vector<string>answerVector;

  string answer, decision, firstName, lastName;
  int age;
  bool glasses;
  char decision2; 

  ofstream outfile;
  outfile.open("results.txt");

  cout << "Hi, what is your first name?:";
  cin >> firstName;

  outfile << "First Name: " << firstName << endl;

  cout << "What is your last name?:";
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
  
*/
  return 0;
}
