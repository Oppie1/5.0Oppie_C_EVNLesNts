#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//Make a file to read from in program files in notepade or in solution exploror -> source files -> TestReadFile.txt.

int main() {

	//Declare a FILE pointer * uninitialized and named fPointer.
	//CODE:

	//Assign fPointer to the function fopen() with parameters "TestReadFile.txt" and, "r"
	//CODE:

	//If the file couldn't be opened (e.g. it doesn't exist). fopen returns NULL
	//Create an if statement with condition that fPointer == NULL
	//CODE:

		//Call a printf() to display error message.
		//CODE:
		printf("The file could not be opened here is your error message.");

		//return 1 to signal program ended due to error.
		//CODE:

//Declare a uninitialized char array set to 150 elements named singleLine.
//CODE:

//Use a while loop ! NOT operator and feof() -> file end of file function with arg fPointer.
//CODE:

		//Call fgets() with char variable singleLine as first argument, 150 (total elements) as the second arg,
		//and the fPointer variable as the last (3rd) arg. 
		//CODE:
		
		//Print the line to the file which you can check in the program file.
		//Call a puts function with an argument of singleLine to the console.
		//CODE:

		//Call fclose function with the fPointer as the argument outside while()
	//CODE:

}

//The output appears double-spaced because each line in the .txt file ends with a newline character '\n'.
//Since puts() also appends its own newline, each line gets printed with an extra blank line between 