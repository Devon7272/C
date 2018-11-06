/* Demonstrates the use of the malloc() function */

#include <stdlib.h>
#include <stdio.h>
int main ( void ) 
{
    /* allocate memory for a 100-character string */
    char *str;
    str = (char *) malloc(100);
    if (str == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }
    printf("String was allocated!\n");
    return 0;
}
