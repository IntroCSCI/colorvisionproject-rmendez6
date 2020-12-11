#ifndef USER_H
#define USER_H

using namespace std;

#include <string>
#include <vector>


class user
{
  private: // Only can be used directly INSIDE this class
    vector<string>answerVector;
    string answer;
    string decision;
    string firstName;
    string lastName;
    int age;
    string glasses;
    string colorBlindSetting; 
  
  public: // Can be used directly INSIDE and OUTSIDE this class
    // Member function prototypes...
    void setFirstName(string input);
    string getFirstName();
    void setLastName(string input);
    string getLastName();
    void setAnswer(string input);
    string getAnswer();
    void setDecision(string input);
    string getDecision();
    void setAge (int input);
    int getAge();
    void setGlasses(bool input);
    string getGlasses();
    void setColorBlindSetting(string input);
    string getColorBlindSetting();
};
#endif