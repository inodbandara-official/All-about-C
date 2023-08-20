// C program to demonstrate printing of our own name using scanf()
#include <stdio.h>

int main()  // main function
{
  // using char data type for the name variable and 
  // giving twenty spaces to contain the letters of the name
	char name[20];  
	printf("Enter name: ");

	// user input will be taken into the variable using this function
	scanf("%s", name);

  	// printing the output as usual
	printf("Your name is %s.", name);

	// using this "\n" command, you can get the output in a new line
	printf("\n\n");

// C program to take an integer as input and print it

	// Declare the variables using int data type
	int num;

	// Input the integer value
	printf("Enter the integer: ");
	scanf("%d", &num);

	// Display the integer value using printf function
	printf("Entered integer is: %d", num);

	return 0;
}
