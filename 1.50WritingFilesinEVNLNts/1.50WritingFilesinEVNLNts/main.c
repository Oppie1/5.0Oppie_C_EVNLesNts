#include<stdio.h>
#include<stdlib.h>



int main() {


	//Declare a FILE pointer (*) and name it fPointer.
	FILE* fPointer;

	//Use an if statement with the condition fopen_s()->3 parameters. memory location of fPointer,arg"TestTextFile.txt",
	//3rd being open the file in write mode using "w" to create the file if it doesn't exist or wipe it if it does. If the  
	//condition DOES NOT = 0 then it means failed to opened file. -> 0 = Success (file opened). Non-zero = Error (failed to open file)
	//CODE:


		//Call the perror() with the parameter "Error opening file" as the parameter.
		//CODE:

		//Exit the program with a non-zero code to signal that an error occurred by using 1 as the return value.
		//CODE:

	//Call the fprintf() to write to the file using the FILE POINTER then sentence 2nd arg
	//CODE:

	printf("If you're seeing this message you correctly wrote to a file. Go check it out in folder.\n");
}
