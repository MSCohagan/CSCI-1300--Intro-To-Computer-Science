//Michael Cohagan
//CSCI 1300 - Assignment 3 - Problem 1
//Karthik 

#include <iostream>
#include <string>

using namespace std;

// Defining the function madLibs to be used
// in main
void madLibs(void) {
	
	// Here I initialize the variables to be used
	// in the madLibs game
	string pluralNoun;
	string singularNoun;
	string occupation;
	string animal;
	string place;
	string verb;
	
	//Ask for user input then store 
	//input as variables above
	cout << "Enter a plural noun: ";
	cin >> pluralNoun;
	cout << "Enter a singular noun: ";
	cin >> singularNoun;
	cout << "Enter an occupation: ";
	cin >> occupation;
	cout << "Enter an animal name: ";
	cin >> animal;
	cout << "Enter a place: ";
	cin >> place;
	cout << "Enter a verb: ";
	cin >> verb;
	
	//Output madlib for user
	cout << "In the book War of the " << pluralNoun 
		 << ", the main character is an anonymous "
		 << occupation << " who records the arrival of the "
		 << animal << "s in " << place << " -- Needless to say, havoc reigns as the "
		 << animal << "s continue to "
		 << verb << " everything in sight, until they are killed by the common "
		 << singularNoun << "." << endl;
	
}

int main() {

	// A while loop is required to play the game
	// indefinitely, the boolean structure allows the 
	// while loop to terminate if the given value returns
	// false, but if the given value returns true the loop
	// will continue
	
	bool isrunning;
	isrunning = true;
	while (isrunning == true)
	{
		
		// Ask for input from the user
		string play;
		cout << "Do you want to play a game? (y) or (n) ";
		cin >> play;
	
		// If/Else statement allows different values to be
		//Evaluated while within the while loop
		
		// Given the case "y" the program runs the madLibs 
		// function 
		if (play == "y")
			madLibs();
			
		// In the case that "n" is entered the value of "isrunning"
		// will return false and exit the loop, terminating the
		// program
	
		else if (play == "n"){
			cout << "good bye";
			isrunning = false;
		}
		
		// Check case for any input besides desired inputs
		// repeat loop
		else 
			cout << "Wrong input, try again: " << endl;
		
		
	}
	
}