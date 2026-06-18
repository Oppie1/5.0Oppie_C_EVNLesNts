#include<stdio.h>
#include<string.h>



int main() {


	//Declare a uninitialized character array to hold the cat's name. With 50 elements.
	//CODE:
	char catsName[50];

	//Declare uninitialized char array that has a smaller buffer for the cat's favorite food up to 25 char.
	//CODE:
	char catsFood[25];

	//Declare a buffer for the final assembled sentence that is initialized to just blank quotes.
	//75 characters is the hard limit.
	//CODE:
	char sentence[75] = "";

	//Prompt the user for the cat's name using puts()
	//CODE:
	puts("What is cats name?");

		//Call gets() to read the full line of input into catsName.
		//CODE:
	gets(catsName);

	//Prompt the user for the cat's favorite food using the puts() function.
	//CODE:
	puts("What is cats favorite food?");

	//Use a gets() to read in user info into the catsFood 
	//CODE:
	gets(catsFood);

	//Call strcat_s() function to scan in user into the 3 arguments. 1st is sentence var.
	//since it's not a standard string (NO %s) The second has to do with the size of the sentence.
	//And the third is the variable.
	//CODE:
	strcat_s(sentence, sizeof(sentence), catsName);

	//Call strcat_s in the same way as you did above. third part just right a piece of a sentence that makes 
	//sense to connect the beginning  and the end of the sentence (next bit of code) something like "loves to eat".
	//CODE:
	strcat_s(sentence, sizeof(sentence), " likes to eat ");
		//Call in same way you just did above using strcat_s to add in the cats food to the sentence at the end.
		//CODE:
	strcat_s(sentence, sizeof(sentence), catsFood);

	//Call a puts() function with argument to print the sentence you made to screen
	//CODE:
		puts(sentence);

}