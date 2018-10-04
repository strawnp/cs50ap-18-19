#include <stdio.h>

int main(void)
{
    for (int i = 5; i <= 50; i += 5)
    {
        printf("The %dth triangular number is %d\n", i, i * (i + 1) / 2);
    }
}