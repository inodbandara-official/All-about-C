// C program to demonstrate whether a number is prime or not using while loop
#include <stdio.h>

// Defining the function
int primenumber(int number)
{

	// Condition for checking the given number is prime or not
	int i = 2;
	while (i <= number / 2)
	{
		if (number % i == 0)
			return 0;
		else
			i++;
	}
	return 1;
}

// Driver code
int main()
{
	int num = 7, prime;

	// Calling the function
	prime = primenumber(num);

// Printing the result
	if (prime == 1)
		printf("%d is a prime number", num);
	else
		printf("%d is not a prime number", num);
	return 0;
}
