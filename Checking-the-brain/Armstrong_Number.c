// C program to check given number is Armstrong number or not using Sum of Digits
#include <stdio.h>

// Driver code
int main()
{
	int n = 153; // check for the 153 (we can change the value in here)
	int temp = n;
	int p = 0;

	// Calculating the sum of individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (rem * rem * rem);
		n = n / 10;
	}

	// Condition to check whether the value of P equals to user input or not.
	if (temp == p) {
		printf("Yes. It is Armstrong No.");
	}
	else {
		printf("No. It is not an Armstrong No.");
	}
	return 0;
}
