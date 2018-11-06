/* Demonstrates a simple for statment that counts by 5 */
#include <stdio.h>

int count;

int main ( void )\
{
    // prints the numbers counting by 5
    for (count = 0; count < 1000; count +=5)
        printf("\n%d", count);

    return 0;
}
