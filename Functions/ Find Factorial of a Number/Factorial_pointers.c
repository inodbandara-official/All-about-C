// C program to find factorial of given number using pointers
#include <math.h>
#include <stdio.h>

int factorial(int n, int *fact)
{
int x;

*fact = 1;

for(x = 1; x <= n; x++)
	*fact = *fact * x;
}

// Driver Code
int main()
{
int fact;
int num = 5;
factorial(num, &fact);
printf("Factorial of %d is %d",
		num, fact);
return 0;
}
