/* Demonstrates a simple for statment that print the elements of an array [], stopping when all elements have been
 * printed or an element with the value of 0 is encountered */
#include <stdio.h>
 int count;

 int main ( void )
 {
     // prints elements of array, stop when all elements are printed and stops when the value of 0 is encountered
     for (count = 0; count < 1000 && array[count]; )
         printf("%d", array[count++]);

     return 0;
 }
