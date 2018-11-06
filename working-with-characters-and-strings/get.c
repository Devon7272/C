/* Demonstrates using the gets() library function. */

#include <stdio.h>

/* Allocate a character array to hold input . */

char input [257];

int main( void )
{
    puts("Enter some text, then press ENTER: ");
    gets(input);
    printf("You entered: %s\n", input);

    return 0;
}

/* Using the gets() function can be extremely dangerous,
 you need to know exactly how many characters you will 
 be reading, so that you can make you buffer large enough.
 You only know this if you know exactly what data you will
 be reading. Basically if the data you input is greater than
 your character specifications you will overwrite the stack
 This will succeed sometimes becasue C does not have bound
 checking, but eventually you will reach an address you do have
 acces to. */
