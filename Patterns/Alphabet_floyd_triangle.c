// C program to Demonstrate Alphabet Floyd's Triangle Using for loop
#include <stdio.h>

void alpha_floyd(int n)
{
	int k = 'a';
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("%c ", k++);
		printf("\n");
	}
}

int main()
{
	alpha_floyd(6);
	return 0;
}
