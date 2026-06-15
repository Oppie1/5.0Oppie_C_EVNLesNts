#include<stdio.h>
#include<stdlib.h>


int main() {

	//Declare a char array 'name' with 14 elements and assign it the string "Kanopi and Lotus"
	//CODE:
	char name[23] = "Kanopi and Lotus";

	//Print a greeting message to the screen using the string stored in 'name'.
	//CODE:
	printf("%s are looking for Petra\n", name);

	//Declare a char array called 'food' with 13 elements and initialize it to "soybeans".
	//CODE:
	char food[13] = "soybeans";

	//Show to the screen using a sentence is the best food in the world. 
	//CODE:
	printf("%s are the best food in the world\n", food);

	
	//Remember all strcpy() is a function with 2 parameters creating a new string value.
	//Call strcpy() with peanuts as its parameter.
	//CODE:
	strcpy(food, "peanuts");

	//Print the updated value of 'food' to confirm strcpy() replaced.
	//CODE:
	printf("%s are the best food in the world\n", food);

}