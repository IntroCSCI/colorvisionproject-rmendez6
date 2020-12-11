#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "user.h"
#include "libraries/bitmap.h"
using namespace std;

int main()
{
  Bitmap image;
  vector<string>answerVector;
  user test;

  string answer, decision, firstName, lastName, imageColor1, imageColor2, imageColor3, choice;
  string secondImageColor1, secondImageColor2, finalAnswer;
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

  cout << "Does color blindness run in the family?(Yes/No)" << endl;
    cin >> answer;
  if (answer == "Yes") {
    string formatttedAnswer= "Yes color blindess runs in the family";
    answerVector.push_back(formatttedAnswer);
  }

  for(int i=0; i < answerVector.size(); i++){
   cout << answerVector[i] << ' ';
  }
  cout << "Would you like to open file greenland.bmp or snailimage.bmp?"<<endl;
  cin >> choice;


  if(choice == "greenland.bmp"){
    cout << "Do you see the color red?(Yes/No)" << endl;
    cin >> imageColor1;

    if (imageColor1 == "Yes"){
      cout << "Correct red is in the image." << endl;
      outfile << test.getFirstName() << " was able to see red in greenland.bmp file." << endl;
    }
    else if (imageColor1 == "No") {
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see red in the greenland.bmp file." << endl;
    }

    cout << "Do you see the color green?(Yes/No)" << endl;
    cin >> imageColor2;

    if (imageColor2 == "Yes"){
      cout << "Correct green is in the image." << endl;
      outfile << test.getFirstName() << " was able to see grrem in the greenland.bmp file." << endl;
    }
    else if (imageColor2 == "No"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see green in the greenland.bmp file." << endl;
    }
    cout << "Do you see the color blue?(Yes/No)" << endl;
    cin >> imageColor3;

    if (imageColor3 == "Yes"){
      cout << "Correct blue is in the image." << endl;
      outfile << test.getFirstName() << " was anle to see blue in the greenland.bmp file." << endl;
    }
    else if (imageColor3 == "No"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see blue in the greenland.bmp file." << endl;
    }
  }
  else if(choice == "snailimage.bmp"){
    cout << "Do you see the color yellow?(Yes/No)" << endl;
    cin >> secondImageColor1;
    
    if(secondImageColor1 == "Yes"){
      cout << "Correct yellow is in the image." << endl;
      outfile << test.getFirstName() << " was able to see yellow in the snailimage.bmp file." << endl;
    }
    else if(secondImageColor1 == "No"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see yellow in the snailimage.bmp file." << endl;
    }
    cout << "Do you see the color brown?" << endl;
    cin >> secondImageColor2;
    if(secondImageColor2 == "Yes"){
      cout << "Correct brown is in the image." << endl;
      outfile << test.getFirstName() << " was able to see brown in the snailimage.bmp file." << endl;
    }
    else if(secondImageColor2 == "No"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see browm in the snailimage.bmp file." <<endl;
    }
  }
  do{
    cout << "Would you like to turn on colorblind settings for greenland.bmp or snailimage.bmp and covert image to grayscale? (Yes or No):";
    cin >> decision;
  if (decision == "Yes" || decision == "yes") 
  {
    cout << "Colorblind setttings enabled for " << choice << " and it is now in the converted_" << choice << "file." << endl;

    image.grayScaleConverter("greenland.bmp");
    cout << "Are you now able to see the image in gray and black?(Yes/No)" << endl;
    cin >> finalAnswer;
  }

  else if (decision == "No" || decision == "no") 
  {
    cout << "Regular picture settings on." << endl;
    
  }
  else {
    cout << "Please enter Yes or No." << endl;
  }
  }while (decision != "Yes" && decision != "yes" && decision != "No" && decision != "no");

    test.setColorBlindSetting(decision);
    outfile << "Color blind settings enabled: " << test.getColorBlindSetting()<< endl;

  outfile.close();
    cout << "Thank you for answering the questions, your results are in the results.txt file." << endl;

  return 0;
}
