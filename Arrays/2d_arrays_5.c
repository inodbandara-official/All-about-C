// Using the concept of pointer to an array
#include <stdio.h>
const int M = 3;

void print(int (*arr)[M])
{
	int i, j;
	for (i = 0; i < M; i++)
	for (j = 0; j < M; j++)
		printf("%d ", arr[i][j]);
}

int main()
{
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	print(arr);
	return 0;
}
