/* Demonstrates the use of the malloc() function with integers */
#include <stdlib.h>
#include <stdio.h>
int main ( void )
{
    /* allocate memory for an array of 50 integers */
    int *numbers;
    numbers = (int *) malloc(50 * sizeof(int));
    if (numbers == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }
    printf("Integer was allocated!\n");
    return 0;
}
