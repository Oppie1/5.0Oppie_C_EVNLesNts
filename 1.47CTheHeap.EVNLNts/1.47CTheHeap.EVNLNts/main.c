#include<stdio.h>
#include<stdlib.h>



int main() {


	//Declare an uninitialized int pointer named points.

	//Assign points pointer to the amount of memory requested from the heap. Use an int* typecast pointer,
	//The malloc() with the argument of 5 times the sizeof() with int as its argument.
	//CODE:

	printf("Memory successfully borrowed from the heap for 5 integers.\n");
	//Call a printf() function declaring the amount of bytes we are taking from the heap using EXPRESSION from arg above.
	//CODE:

	//Call the free() with the arguments points to free up the bytes held in points storage.
	//CODE:

	printf("\n\nMemory has been returned to the heap.\n");

}