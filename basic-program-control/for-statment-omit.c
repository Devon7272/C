/* Demonstrates a simple for statment that omit the increment expression */
#include <stdio.h>

int count;

int main ( void )
{
    // omitting the increment expression to the printf statment
    for ( count = 0; count < 100; )
        printf("\n%d", count ++);

    return 0;
}
