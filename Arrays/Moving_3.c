// C program to copy all the elements of one array to another using recursion

#include <stdio.h>

int copy_array(int a[], int b[], int n, int i)
{
	// copying elements from one array to another
	if (i < n) {
		b[i] = a[i];
		copy_array(a, b, n, ++i);
	}
}
int array(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++) {

		printf("%d ", a[i]);
	}
}

int main()
{
	int k[5] = { 3, 6, 9, 2, 5 }, n = 5;
	int l[n], i;

	copy_array(k, l, n, 0);
	// displaying first array before copy the elements from one array to other

	printf("first array : ");
	array(k, n);

	// displaying array after copy the elements from one array to other
	printf("\nsecond array : ");
	array(l, n);
	return 0;
}
