// C program to demonstrate whether a number is prime or not using for loop
#include <stdio.h>

// Defining the function
int primenumber(int number)
{
	int i;

	// Condition for checking the given number is prime number or not
	for (i = 2; i <= number - 1; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}

// Driver code
int main()
{
	int num = 4, res;

	// Calling the function
	res = primenumber(num);

	if (res == 1)
		printf("%d is a prime number", num);
	else
		printf("%d is not a prime number", num);

	return 0;
}
