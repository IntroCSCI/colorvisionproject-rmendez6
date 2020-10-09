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
What is you last name?:mendez 
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

I used string to represent "yes" or "no" as decision. It allows the user to select whether they want to enable the regular setings or the colorblind settings.

 !!!Replace with a summary and examples of how multiple variables have been used with a variety of data types and why they have been used effectively and appropriately!!!

### Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!
Input is this in this program as the user is asked whether they want to enable colorblind settings and the user inouts either "yes"or "no". Input is seen as cin is this program. 
The output in this program comes after the user inputs their decision. If the user inputs "yes" then the output will say "Colorblind settings enabled." If the user inputs "no" then the output will say "Regular settings enabled." The output in this program is cout.
### Decisions

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!

### Iteration

!!!Replace with a summary and examples of how iteration has been used effectively and appropriately!!!
For iteration I used a do-while loop to gather the users input and if the input was something othe than asked for, it would ask the user the question again until a viable answer was inputed. 

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!
I used input/output files by having the user answer a couple questions throughout the program and giving the user the results at the end in a file called results.txt. For example, I asked for the users file input when I asked "Hi, what is your first name?:" and it was saved to the output file called result.txt. I also asked the user "What is your last name?:" and it was saved to the output file callws results.txt. Other examples include, "How old are you?:" and "Do you wear glasses?(Y/N): and "Welcome, would you like to turn on colorblind settings?(Yes or NO)." The users file input is saved to results.txt and shown to the user at the end of the program in the results.txt file.