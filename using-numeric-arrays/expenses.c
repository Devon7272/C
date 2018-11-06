/* expenses.c Demonstrates use of an array */

#include <stdio.h>

/* Declare an array to hold expenses, and a counter variable */

float expenses[13];
int count;
float year_expenses = 0;

int main ( void )
{
    for (count = 1; count < 13; count++)
    {
        
        
        printf("Enter expenses for month %d: ", count);
        scanf("%f", &expenses[count]);
    }

    /* print array contents */

    for (count = 1; count < 13; count++)
    {
        printf("Month %d = $%.2f\n", count, expenses[count]);
         year_expenses += expenses[count];
    }
    printf("Yearly expenses are $%.2f\n", year_expenses);
    return 0;
}
