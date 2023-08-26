// C program to copy all the elements of one array to another using functions
#include <stdio.h>

int copy_array(int* a, int* b, int n)
{
	int i;

	// copying elements from one array to another
	for (i = 0; i < n; i++) {
		b[i] = a[i];
	}

	// displaying array after copy the elements from one array to other
	for (i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
}
// displaying first array before copy the elements from one array to other
int first_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int k[5] = { 3, 6, 9, 2, 5 }, n = 5;
	int l[n];
	printf("The first array is : ");
	first_array(k, n);
	printf("\nThe second array is : ");
	copy_array(k, l, n);

	return 0;
}
