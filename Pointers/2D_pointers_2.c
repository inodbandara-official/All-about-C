// C program 2D array of pointers using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5][5] = { { 0, 1, 2, 3, 4 },
                       { 2, 3, 4, 5, 6 },
                       { 4, 5, 6, 7, 8 },
                       { 5, 4, 3, 2, 6 },
                       { 2, 5, 4, 3, 1 } };
 
    // Creating 2D array of pointers using Dynamic Memory allocation through malloc() function
    int*** arr2 = malloc(5 * sizeof(int**));
    for (int i = 0; i < 5; i++)
        arr2[i] = malloc(5 * sizeof(int*));
 
    // Initialising each element of the pointer array with the address of element present in the other array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = &arr1[i][j];
        }
    }
 
    // Printing the array using the array of pointers
    printf("The values are\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", *arr2[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
