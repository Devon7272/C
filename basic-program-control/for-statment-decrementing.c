/* Demonstrates a simple for statment using the decrementing operator -- */

#include <stdio.h>

int count; 

int main( void )
{
    // prints the number 100 and decrements all the way down to one

    for (count = 100; count > 0; count --)
        printf("\n%d", count);

    return 0;
}

