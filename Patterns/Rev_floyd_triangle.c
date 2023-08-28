// C program to Demonstrate Reverse Floyd's Triangle Using for loop
#include <iostream>
using namespace std;

void reverse_floyd(int n)
{
	// total number of elements
	int i = n * (n + 1) / 2;

	// condition for printing them
	while (i > 0) {
		for (int j = 0; j < n; j++)
			printf("%d ", i--);
		n--;
		printf("\n");
	}
}

int main()
{
	reverse_floyd(6);
	return 0;
}
