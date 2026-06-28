#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main() {

	//Set up three uninitialized integer variables: one for birth year, one for current year for calculated age.
	//CODE:
	int birthYear;
	int currentYear;
	int age;

	//Ask the user to provide the year of their birth.
	//CODE:
	printf("What year were you born?\n");

	//Capture the user's birth year from the console using scanf_s.
	//CODE:
	scanf_s("%d", &birthYear);

	//Ask the user to provide the current year.
	//CODE:
	printf("\nWhat is the current year?\n");

	//Capture the current year from the console using scanf_s().
	//CODE:
	scanf_s("%d", &currentYear);

	//Subtract the birth year from the current year to find and assign age.
	//CODE:
	age = currentYear - birthYear;

	//Call a print function to show the raw year person was born.	
	//CODE:
	printf("Your raw age is: %d\n\n", age);

	//Fix potential negative ages by assigning age to the result of abs(age).
	//CODE:
	age = abs(age);

	//Print out the corrected, strictly-positive age to the console.
	//CODE:
	printf("You are %d years old\n", age);

}