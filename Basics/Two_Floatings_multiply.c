// A simple C program to multiply two floating point numbers
#include <stdio.h>

// Function to multiply floating numbers
float multiply(float a, float b)
{
return a * b;
}

// Driver code
int main()
{
	float A = 2.12, B = 3.88, product;

	// Calling product function
	product = multiply(A, B);

	// Displaying result up to 3 decimal places. (%.3f means 3 decimal points for the floating number)
	printf("Product of entered numbers is:%.3f", product);

	return 0;
}
