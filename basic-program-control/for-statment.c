/* Demonstrates a simple for statment */

#include <stdio.h>
#define MAXCOUNT 20
int count;

int main( void )
{
    /* print the numbers 1 through 20 */

    for( count = 1; count <= MAXCOUNT; count++)
        printf("%d\n", count);

    return 0;
}
