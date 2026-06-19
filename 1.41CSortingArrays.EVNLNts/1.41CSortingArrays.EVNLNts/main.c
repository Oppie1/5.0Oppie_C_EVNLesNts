#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Call the srand() function with the time() w NULL
	//CODE:

	//Declare 3 uninitialized int variables. One as a loop counter i, temp and swap.
	//CODE:

	//Declare an int named howMany that is initialized to 3.
	//CODE:

	//Declare an uninitialized goals array with 3 elements.
	//CODE:

	//Create a for loop that starts i at 0, i is less than how many, then increment 1
	//CODE:

		//Assign the current position of the goals array to rand() with no parameters % 10 Then humanize it.
		//CODE:

	printf("Original List\n");
	//Create a for loop to match the for loop to print info to screen.
	//CODE:

		//Call printf() to show goals at given positions to the screen.
		//CODE:

	//Create a while loop with 1 as its parameter.
	//CODE:

			//Initialize the swapped variable to 0.
			//CODE:

			//Create a for loop to humanize it in different way as it scrolls through how many...
			//We don't want to reach the last element without comparison property (move cursor).
			//CODE:

				//Use a nested if statement to see if the current element of goal[i]
				//is greater than the next element of goal[i] -> goal[i + 1]
				//CODE:

					//Assign the temp variable to the current goals[i].
					//CODE:

					//Assign the current element goals[i] to the next position i + 1.
					//CODE:

					//Assign the next element to the value stored in temp.
					//CODE:

					//Set swapped = 0 to 1 here within the if statement.
					//CODE:

		//Use if statement to see if swapped variable equals 0. Codeblock = break.
		//CODE:

		printf("\nSorted List\n");

		//Use a for loop to match the first for loop you created in the unsorted list. It should
		//be identical but will produce a sorted list.
		//CODE:

			//Use the same format for the print statement as well.
				//CODE:

		}