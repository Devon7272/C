/* Demonstrates the use of malloc() for a float */
#include <stdlib.h>
#include <stdio.h>
int main ( void )
{
    /* allocate memory for an array of 10 float values */
    float *numbers;
    numbers = (float *) malloc(10 * sizeof(float));
    if (numbers == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }
    printf("Float was allocated\n");
    return 0;
}
