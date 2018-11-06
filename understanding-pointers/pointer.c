/* Demonstrates basic pointer use. */

#include <stdio.h>

/* Declare and intialize an int varaible */

int var = 1;

/* Declare a pointer to int */

int *ptr;

int main ( void )
{
    /* Initialzie ptr to point to var */ 

    ptr = &var;

   /* Access var directly and indirectly */

   printf("\nDirectly access, var = %d",  var);
   printf("\nIndirectly access, var = %d", *ptr);

   /* Display the address of var two ways */

printf("\n\nThe address of var = %p", &var);
printf("\nThe address of var = %p\n", ptr);

return 0;
}
