#include<stdio.h>
#include<stdlib.h>


//Create a global void function called print something.
//CODE:

//Declare a global int variable named tortillasOutsideMain initialized to 3.
//CODE:

int main() {

	//Declare an int local variable named int tortillasInsideMain initialized to 23.
	//CODE:

	//Call print function to make a sentence that access the variable you just created (local)
	//CODE:

	//Call a printf(), make a sentence that uses the global variable (tortillasOutMain)
	//CODE:

	//Call the global function outside main()
	//CODE:

	
//If uncommented they would reference variableInFunction which is local to printSomething()
//printf("Cannot use variable in function outside main. It is that functions local variable", variableInFunction);
//printf("VariableInFunction = %d) -> would get an error and program would not run.
}


//Define void function prototype for this program.
//CODE:

	//Declare a local int variable name variableInFunction initialized to 7
	//CODE:

	//Call a printf() to demonstrate with a sentence and global variable outside main this
	//concept and display info to screen.
	//CODE:

	//Call printf() with a sentence and the local variable to demonstrate this concept.
	//CODE:

//PrintSomething() cannot use variables located inside main. Only global and local to itself.