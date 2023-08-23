// C program to print right half pyramid pattern of number/s and star/s
#include <stdio.h>

int main()
{
	int row;
	printf("Number of rows: ");
	scanf("%d", &row);

	// first loop for printing rows
	for (int i = 1; i <= row; i++) {

		// second loop for printing similar number in each rows
		for (int j = 1; j <= i; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}

	int m = 6;

	// kth row has k elements
	for (int k = 1; k <= m; k++) {
		for (int j = 1; l <= k; l++) {
			printf("*");
		}
		printf("\n");
	}

	int rows = 8, a, b, space;

	for (a = rows; a >= 1; --a)
	{
	// Loop to print the blank space
	for (space = 0;
			space < rows - a; ++space)
		printf(" ");
	
	// Loop to print the half of the star triangle
	for (b = a; b <= 2 * a - 1; ++b)
		printf("* ");
	
	// Loop to print the rest of the star triangle
	for (b = 0; b < a - 1; ++b)
		printf("* ");
	printf("\n");
}

	return 0;
}
