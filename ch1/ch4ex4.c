#include <stdio.h>

int main(void)
{
    // initialize product for computing factorial
    int product = 1;

    // print factorial of i
    for (int i = 1; i <= 10; i++)
    {
        product *= i;
        printf("%d! = %d\n", i, product);
    }
}