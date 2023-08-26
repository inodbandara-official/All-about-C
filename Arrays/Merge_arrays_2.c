// C Program To Merge Two Arrays using functions
#include <stdio.h>

int mergearray(int a[], int b[], int arr1size, int arr2size)
{

	// resultant Array Size Declaration
	int arr_resultsize = arr1size + arr2size;
	int c[arr_resultsize], i, j;

	// copying array 1 elements in to c array
	for (i = 0; i < arr1size; i++) {
		c[i] = a[i];
	}

	// copying array 2 elements in to c array
	for (i = 0, j = arr1size;
		j < arr_resultsize && i < arr2size; i++, j++) {
		c[j] = b[i];
	}

	// Array Elements After Merging
	for ( int k = 0; k < arr_resultsize; k++) {
		printf("%d ", c[k]);
	}
}

int main()
{
	int arr1size = 5, arr2size = 5;

	// elements of first Array
	int a[5] = { 1, 2, 3, 4, 5 };

	// elements of Second Array
	int b[5] = { 6, 7, 8, 9, 10 };

	printf("%d", mergearray(a, b, arr1size, arr2size));
	return 0;
}
