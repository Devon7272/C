/* arraypass2.c--Passing an array to a function. Alternative way. */

#include <stdio.h>

#define MAX 10 

int array[MAX+1], count;

int largest (int num_array[]);

int main ( void )
{
    /* Input MAX values form the Keyboard */

    for (count = 0; count < MAX; count ++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &array[count]);

        if (array[count] == 0 )
            count = MAX;                 /* will exit for loop */
    }
    array[MAX] = 0; 

    /* Call the function and display the return value. */
    printf("\n\nLargest value = %d\n", largest(array));

    return 0;
}
/* Function largest () returns the largest value */
/* in an integer array */

int largest(int num_array[])
{
    int count, biggest;

    for (count = 0; num_array[count] != 0; count ++)
    {
        if ( count == 0)
            biggest = num_array[count];
        if (num_array[count] > biggest)
            biggest = num_array[count];
    }

    return biggest;
}
