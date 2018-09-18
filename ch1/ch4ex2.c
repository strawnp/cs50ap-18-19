#include <stdio.h>

int main(void)
{
    // print column headings
    printf("  n  \t  n^2  \n");
    printf("-----\t-------\n");

    // print values of n and n^2
    for (int i = 1; i <= 10; i++)
    {
        printf("  %d  \t  %d\n", i, i * i);
    }

    return 0;
}