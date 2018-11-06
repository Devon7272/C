// Program to demonstrate nesting for loops

#include <stdio.h>
void print_ttable(int outer, int inner);

int main()
{
    int inner = 10;
    int outer = 10;

    printf("The times table:\n");
    print_ttable(outer, inner);
    return (0);
}
    void print_ttable(int outer, int inner)
{
    int a,b;
    for (a = 1; a <= outer; a++)
    {
        for (b =1; b <= inner; b++)
        {
            printf("%d\t", a*b);
        }
        printf("\n");
    }
    return;
}

