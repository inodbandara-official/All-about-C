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
	return 0;
}
