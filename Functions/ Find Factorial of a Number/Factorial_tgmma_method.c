// C program to find factorial of given number
#include <math.h>
#include <stdio.h>

// Driver Code
int main()
{
int num = 5;

num = tgamma(num + 1);

printf("Factorial is %d", num);

return 0;
}
