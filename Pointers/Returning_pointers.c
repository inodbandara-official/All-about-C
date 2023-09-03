// C program to returning pointer from a function
#include <stdio.h>

// Function(inod) that returns pointer
int* inod()
{
	// Declare a static integer
	static int A = 10;
	return (&A);
}

// Driver Code
int main()
{
	// Declare a pointer
	int* p;

	// Function call - calling inod
	p = inod();

	// Print Address
	printf("%p\n", p);

	// Print value at the above address
	printf("%d\n", *p);
	return 0;
}
