// C program to Demonstrate Floyd's Triangle Using while loop
#include <stdio.h>
void floyd(int n)
{
	int i = 1, j = 1;
	// condition for number of element
	while (i <= (n * (n + 1)) / 2) {
	
		printf("%d ", i);
	
		// condition for what element has to print and how many times
		if (i == (j * (j + 1)) / 2) {
			printf("\n");
			j++;
		}
		i++;
	}
}

int main() { 
  floyd(6); 
}
