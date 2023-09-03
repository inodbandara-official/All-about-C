// C program to swap two variables
#include <stdio.h>

// Driver code
int main()
{

  // using a temporary variable
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y ");
	scanf("%d", &y);

	// Using a temporary variable to swap the values store the value of x in a temporary variable
	int temp = x;
	// Assign the value of y to x
	x = y;
	// Assign the value stored in the temporary variable to y
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);


/*====================================*/


  
  // without using a third variable
	int a, b;
	printf("Enter the two numbers : \n");
	scanf("%d %d", &a, &b);
	printf("Before swapping A is : %d and B is %d \n", a,	b);

	// Swapping without using a third variable Sum of both numbers is stored in 'a'
	a = a + b;
	// Difference of sum and original 'b' is stored in 'b'
	b = a - b;
	// Difference of sum and new 'b' is stored in 'a'
	a = a - b;

	printf("After swapping A is : %d and B is : %d \n", a, b);
	return 0;
}


