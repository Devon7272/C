/* Demonstrates a simple for statment that copies the contents of two 1000 element arrays a[] and [] a nd we want to
 * copy them in reverse order so after the copy operation b[0] = a[999], b[1] = a[998], and so on. */
#include <stdio.h>

int main ( void ) 
{
    // using to c's comma operation in this for statment to create an expression by seperating a subexpression with the
    // comma operator. This allow are for statment to perfom multiple duties.

    for (i = 0, j = 999; i < 1000; i++, j--)
        b[j] = a[i];

     
}

