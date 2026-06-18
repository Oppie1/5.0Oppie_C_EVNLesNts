#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {

	//Declare a char array named 'password' with 10 elements to store the user's input
	//CODE:

	//Declare 3 int variables all initialized to 0. These are flags for lowercase
	//and uppercase letters and another for a digit. 
	//CODE:

	printf("Please enter a strong password!\n");
	printf("Must contain uppercase, lowercase letters and digits.\n");
	printf("No more than 9 characters. No symbols\n");
	printf("Make your password:\n");


	//call scanf_s() and pass 3 arguments: the first using string with number of slots, the second a
	//variable password that will be passed in and third using sizeof() with the password variable as the argument.
	//CODE:

	//Create a for loop with a counter variable i.  Initialize i to 0, then 
	//condition. It is where we set i < the string length with password df arg then increment by 1
	//CODE:

		//Make a three nested if statements each of which will check for lowercase, 
		//uppercase, letters and digits are in the password
		//we call the islower() function  (password var at each i)
		//CODE:

		//Use the second if isupper() function with same protocol.
		//CODE:

		//Use an if statement in same way as above the above if's using isdigit().
		//CODE:

	//Use an an if statement with the condition passing in lowerCase AND upperCase AND digit
	//as the arguments.
	

		//Call the print function with a sentence saying they have a strong password.
		//CODE:

	//Use an else with printf() to say password is weak.
	//CODE:

}