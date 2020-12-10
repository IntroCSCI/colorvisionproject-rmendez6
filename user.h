#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class user
{
  private: // Only can be used directly INSIDE this class
    vector<string>answerVector;
    string answer, decision, firstName, lastName;
    int age;
    bool glasses;
    char decision2; 
  
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
  bool getGalsses();
  void setDecision2(char input);
  char getDecision2();
  #endif