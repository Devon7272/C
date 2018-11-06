/* Demonstrates nested while statments */

#include <stdio.h>

int array[10];

int main (void)
{
    int ctr = 0,
        nbr = 0;

    printf("This program prompts you to enter 5 numbers\n");
    printf("Each number should be from 1 to 10\n");

    while (ctr < 10)
    {
        nbr = 0;
        while (nbr < 1 || nbr > 100)
        {
            printf("\nEnter number %d of 10: ", ctr + 1);
            scanf("%d", &nbr);
        }

        array[ctr] = nbr;
        ctr++;
    }

    for (ctr = 0; ctr < 10; ctr++)
        printf("value %d is %d\n", ctr + 1, array[ctr] );

    return 0;
}
