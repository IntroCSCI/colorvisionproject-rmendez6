# !!!Replace with your unique project name!!!
Color Vision Friendly Website 
## Description
Color vision friendly website allows users to pick one of two options to determine colorblindness in order to display the appropriate colors for each user. Important information will not be color coded in this website as to allow all users to view imortant information all the same for those unaware of colorblindness. 

## Developer

Rey Mendez

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hi, what is your first name?:rey
What is your last name?:mendez 
How old are you?:23
Do you wear glasses? (Y/N):y
Welcome, would you like to turn on colorblind settings? (Yes or No):n
Please enter Yes or No.
Welcome, would you like to turn on colorblind settings? (Yes or No):no
Regular settings: enabled
Thank you for answering the questions, your results are in the results.txt file.

Here is an example of the results.txt file looks like:
First Name: rey
Last Name: mendez
Age: 23
Use of glasses(0=No,1=Yes): 0
Regular settings: enabled
```

## C++ Guide

### Variables and Data Types

I used string to represent "yes" or "no" as string decision. It allows the user to select whether they want to enable the regular setings or the colorblind settings. Another variable I used was int to gather the users age. I also used char for descision2 to get the users input on if they use galsses. I also used string firstName and string lastName to gather the users first and last name. Finally, I used bool to represent glasses to gather if the user picked 'y' or 'n' for decision2.


### Input and Output

Input is used in this program as the user is asked whether they want to enable colorblind settings and the user inputs either "yes"or "no". The user also inputs their first and last name, as well as their age. Input is seen as cin is this program. 
The output in this program comes after the user inputs their decision. If the user inputs "yes" then the output will say "Colorblind settings enabled." If the user inputs "no" then the output will say "Regular settings enabled." If the user inputs something else rather than yes or no the program will putput "Please enter yes or no." The output in this program is cout.
### Decisions

For decisions I used an if, else if, and else statement. For the if statement, it was used for if the user entered "yes" it would display "Colorblind settings: enabled." For the else if statement, if the user entered "no" it would display "Regular settings: enabled." For the else statement, if the user entered something other than "yes" or "no" it would display "Please enter Yes or No."

### Iteration

For iteration I used a do-while loop to gather the users input and if the input was something other than asked for, it would ask the user the question again until a viable answer was inputed. 

### File Input and Output

I used input/output files by having the user answer a couple questions throughout the program and giving the user the results at the end in a file called results.txt. For example, I asked for the users file input when I asked "Hi, what is your first name?:" and it was saved to the output file called result.txt. I also asked the user "What is your last name?:" and it was saved to the output file called results.txt. Other examples include, "How old are you?:" and "Do you wear glasses?(Y/N): and "Welcome, would you like to turn on colorblind settings?(Yes or NO)." The users file input is saved to results.txt and shown to the user at the end of the program in the results.txt file.

### v0.2 Updates
Added a vector of string in order to take in the question of "Does color blindness run in the family?" in order to diplay color blind settings. 
### Arrays/Vectors
Added vector answerVector to take in the string answer andd store it then display the answer. Also used the .push_back function to display at the end. 
### Functions
Added string answer for the question asked at the bottom of the program after the file closes. Added another if statement and else statment to cout the answer to the question. 