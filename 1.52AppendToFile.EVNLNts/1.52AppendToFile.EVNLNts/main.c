#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main() {

	//Declare an uninitialized FILE pointer and name it fPointer
	//CODE:

	//ASSIGN fPointer to fopen() with "testAppendToAFile.txt" in first arg and "a" in second arg.
	//CODE:

	//Use an if condition to test if the fPointer exists == (NULL) to test if the file is open.
	//CODE:

		//Call printf() to display message to screen when if condition is true and executes (error file could not be opened).
		//CODE:

		//returning 1 to signal program failed.
		//CODE:

	//Call the fprintf() with the pointer and a sentence that that will be printed to the file.
	//CODE:

	//Call the fclose() with the pointer as the argument.

	printf("\nTest successfully appended the file.");

}