#include "user.h"
#include <string>
#include <vector>

using namespace std;

// Member function implementations...
void user::setFirstName(string input){
  firstName=input;
}
string user::getFirstName(){
  return firstName;
}
void user::setLastName(string input){
  lastName=input;
}
string user::getLastName(){
  return lastName;
}
void user::setAnswer(string input){
  answer=input;
}
string user::getAnswer(){
  return answer;
}
void user::setDecision(string input){
  decision=input;
}
string user::getDecision(){
  return decision;
}
void user::setAge(int input){
  age=input;
}
int user::getAge(){
  return age;
}
void user::setGlasses(bool input){
if( input== true){
  glasses="yes";
}
  else
  glasses="no";
}
string user::getGlasses(){
  return glasses;
}
void user::setColorBlindSetting(string input){
  colorBlindSetting=input;
}
string user::getColorBlindSetting(){
  return colorBlindSetting;
}