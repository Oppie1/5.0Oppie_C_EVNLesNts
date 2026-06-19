#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

	//Declare 4 int variables for the four dice rolls.
	//CODE:

	//Declare 2 more uninitialized int variables total and average.
	//CODE:

	//Declare a char variable named userOption.
	//CODE:

	//Call the srand() with the time() with its argument set to NULL as the srand() argument.
	//CODE:

	//These are just instructions so do not erase these in just notes file.
	puts("Betting game");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of the 3 dice (total divided by 3) tells you the number between 1-6.");
	puts("Then guess if next roll (4th dice) is higher(h), lower(l) or same(s) as that avg.\n\n");

	
	//Assign each of the dice roll variables (1-3) to an expression with the rand() function
	//with no parameters and modulus % (divide but just take the remainder) + 1.
	//CODE:

	//CODE:

	//CODE:

	//Assign "total" to the the sum of the three dice rolls.
	//CODE:

	//Assign average to the total variable divided by 3
	//CODE:


	//Call a printf() with a sentence in first argument that says what each of the dice rolls are.
	//CODE:

	//Display the combined total of all three dice using printf().
	//CODE:

	//Print the average to the screen.
	//CODE:

	puts("\n\nGuess if the next roll is higher(h), lower(l) or same(s) as the average:\n");

	//Call a scanf_s function with a char and corresponding user option arg.
	//CODE:

	//Assign diceRoll4 to dice roll formula.
	//CODE:

	//Reveal the result of the 4th dice roll.
	//CODE:	

//Use an if condition with that checks if the dice rolls are greater than the user
//option, less that the user option, or the same as the user option.

//Start with if(a bunch of condition (3 total) with conditions and compare to dR4 to avg);
//CODE:

	//The if code block that lets the user know know that they guessed right.
	//CODE:

	//The else block that lets the user know they guessed wrong.
	//CODE:

}