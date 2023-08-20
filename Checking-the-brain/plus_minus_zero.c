#include <stdio.h>

int main()
{
	int A;

	printf("Enter the number A: ");
	scanf("%d", &A);

  //in here, we are using IF condition
	if (A > 0) // if A is a positive number
		printf("%d is positive.", A);
	else if (A < 0)  // if A is a negative number
		printf("%d is negative.", A);
	else if (A == 0)  // if A is equals to zero
		printf("%d is zero.", A);

	return 0;
}
