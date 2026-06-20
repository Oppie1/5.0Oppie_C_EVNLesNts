#include<stdio.h>



//%p is the format specifier for printing a memory address -- printf(%p, &tuna)(

int main() {

	//Declare an integer named tuna and initialize it to 19
	//CODE:

	printf("Address\t\t\tName\t\tValue\n");

	//Call a printf() %p = pointer, ect.. Remember when using pointer it must match a memory
	//address so you need this symbol & in the 2nd but NOT 3rd, 4th argument to match
	//the other two format access specifiers.
	//CODE:

	printf("\n\nUsing Pointers to demonstrate setting a pointer to a memory address\n\n");

	//Declare a int pointer pTuna using * in initialized to the memory address of tuna.
	//CODE:

	printf("Address\t\t\t \Name\t\tValue\n");

	//Call a printf() with the arg1 like we used earlier but using the pointer pTuna in first arg and tuna same in second arg.

	//Call printf() to show details of the pointer variable itself (pTuna) using %p %s and %p.  
	//to account for the value INSIDE the pointer which is tuna's address.
	//CODE:
	
}