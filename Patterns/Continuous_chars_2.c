// C program to print the continuous character pattern using while loop
#include <stdio.h>

// Driver code
int main()
{
	int i = 1, j = 0;

	// Number of rows
	int rows = 5;

	// Given a character
	char character = 'A';

	while (i <= rows)
	{
		while (j <= i - 1)
		{
			// Printing character to get the required pattern
			printf("%c ",character);
			j++;
		
			// Incrementing character value so that it will print the next character
			character++;
		}
		printf("\n");

		j = 0;
		i++;
	}
	return 0;
}
