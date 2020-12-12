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
  vector<string>familyVector;
  user test;

  string answer, decision, firstName, lastName, imageColor1, imageColor2, imageColor3, choice;
  string secondImageColor1, secondImageColor2, finalAnswer, convertedFileName, familyColorBlind;
  int age;
  bool glasses;
  char decision2;


  ofstream outfile;

  cout << "Hi, what is your first name?:";
  cin >> firstName;
  test.setFirstName(firstName);
  outfile.open("Results/" + test.getFirstName()+ "_results.txt");
  outfile << "      Colorblind profile." << endl;
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

  outfile << "Use of glasses: " <<test.getGlasses() << endl;

  cout << "Does color blindness run in the family?(Yes/No)" << endl;
    cin >> answer;
  if (answer == "Yes" || answer == "yes") {
    cout << "Yes color blindess runs in the family" << endl;
    do{
      cout << "Enter family members name with colorblindness. When done enter No." << endl;
      cin >> familyColorBlind;
      if (familyColorBlind != "No" && familyColorBlind != "no"){
        test.setFamilyColorBlind(familyColorBlind);
      }
    }while(familyColorBlind != "No" && familyColorBlind != "no");
    outfile << "Family members with colorblindness:" << endl;
    familyVector=test.getFamilyColorBlind();
    for(int i=0; i < familyVector.size(); i++){
      cout << i+1 << ". " <<familyVector[i] << ' ' << endl;
      outfile << i+1 << ". " <<familyVector[i] << ' ' << endl;
    }
    cout << "Number of family members with colorblindness: " << test.getNumberFamilyMembers()<< endl;
    outfile << "Number of family members with colorblindness: " << test.getNumberFamilyMembers()<< endl;
  }
  else if(answer == "No" || answer == "no"){
    cout << "Colorblidness does not run in the family." << endl;
    outfile << "Colorblidness does not run in the family." << endl;
  }
  cout << "Colorblind image test will now start. Would you like to open the greenland.bmp or snailimage.bmp in the Images folder?"<<endl;
  cin >> choice;
  outfile << test.getFirstName()<< " selected to open" << choice << endl;


  if(choice == "greenland.bmp"){
    cout << "Please open file in Images/" << choice << endl;
    cout << "Do you see the color red?(Yes/No)" << endl;
    cin >> imageColor1;

    if (imageColor1 == "Yes" || imageColor1 == "yes"){
      cout << "Correct red is in the image." << endl;
      outfile << test.getFirstName() << " was able to see red in greenland.bmp file." << endl;
    }
    else if (imageColor1 == "No" || imageColor1 == "no") {
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see red in the greenland.bmp file." << endl;
    }

    cout << "Do you see the color green?(Yes/No)" << endl;
    cin >> imageColor2;

    if (imageColor2 == "Yes" || imageColor2 == "yes"){
      cout << "Correct green is in the image." << endl;
      outfile << test.getFirstName() << " was able to see grrem in the greenland.bmp file." << endl;
    }
    else if (imageColor2 == "No" || imageColor2 == "no"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see green in the greenland.bmp file." << endl;
    }
    cout << "Do you see the color blue?(Yes/No)" << endl;
    cin >> imageColor3;

    if (imageColor3 == "Yes" || imageColor3 == "yes"){
      cout << "Correct blue is in the image." << endl;
      outfile << test.getFirstName() << " was anle to see blue in the greenland.bmp file." << endl;
    }
    else if (imageColor3 == "No" || imageColor3 == "no"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see blue in the greenland.bmp file." << endl;
    }
  }
  else if(choice == "snailimage.bmp"){
    cout << "Please open file in Images/" << choice << endl;
    cout << "Do you see the color yellow?(Yes/No)" << endl;
    cin >> secondImageColor1;
    
    if(secondImageColor1 == "Yes" || secondImageColor1 == "yes"){
      cout << "Correct yellow is in the image." << endl;
      outfile << test.getFirstName() << " was able to see yellow in the snailimage.bmp file." << endl;
    }
    else if(secondImageColor1 == "No" || secondImageColor1 == "no"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see yellow in the snailimage.bmp file." << endl;
    }
    cout << "Do you see the color brown?" << endl;
    cin >> secondImageColor2;
    if(secondImageColor2 == "Yes" || secondImageColor2 == "yes"){
      cout << "Correct brown is in the image." << endl;
      outfile << test.getFirstName() << " was able to see brown in the snailimage.bmp file." << endl;
    }
    else if(secondImageColor2 == "No" || secondImageColor2 == "no"){
      cout << "Incorrect. May need to convert image to colorblind settings." << endl;
      outfile << test.getFirstName() << " was not able to see browm in the snailimage.bmp file." <<endl;
    }
  }
  do{
    cout << "Would you like to turn on colorblind settings for greenland.bmp or snailimage.bmp and covert image to grayscale? (Yes or No):";
    cin >> decision;
  if (decision == "Yes" || decision == "yes") 
  {
    cout << "Colorblind setttings enabled for " << choice <<" file." << endl;

    outfile << test.getFirstName() << " decided to turn on colorblind settings and convert" << " " << choice << " to gray and black." << endl;

    image.grayScaleConverter(choice, convertedFileName);
    cout << "Converted image for " << choice << " is now in the converted images folder called CI. The file is named "<< convertedFileName << endl;
    cout << "Please open image." << endl;

    cout << "Are you now able to see the image in gray and black?(Yes/No)" << endl;
    cin >> finalAnswer;
    if( finalAnswer == "Yes" || finalAnswer == "yes"){
      outfile <<  finalAnswer << " " << test.getFirstName() << " was able to see the converted image in gray and black." << endl;
    }
    else if( finalAnswer == "No" || finalAnswer == "no"){
      outfile << finalAnswer << " " << test.getFirstName() << " was not able to see the converted image in gray and balck." << endl;
    }
  }

  else if (decision == "No" || decision == "no") 
  {
    cout << "Regular picture settings on." << endl;
    
  }
  else {
    cout << "Please enter Yes or No." << endl;
  }
  }while (decision != "Yes" && decision != "yes" && decision != "No" && decision != "no");

  outfile.close();
    cout << "Thank you for answering the questions, your results are in the " << "Results/" << test.getFirstName()+"_results.txt" << endl;

  return 0;
}
