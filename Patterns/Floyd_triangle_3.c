// C program to Demonstrate Floyd's Triangle Using recursion
#include <stdio.h>
int row = 1, i = 1;
void floyd(int n)
{
	// base condition
	if (n == 0)
		return;

	for (int j = 1; j <= row; j++)
		printf("%d ", i++);
	row++;
	printf("\n");
	floyd(n - 1);
}

int main() {
  floyd(6); 
}
