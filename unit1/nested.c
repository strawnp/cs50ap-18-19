#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 11; i++)
    {
        for (int k = 1; k < 11 - i; k++)
        {
            printf("\t");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}