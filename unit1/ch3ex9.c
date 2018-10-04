#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("Enter the value for i: ");
    int j = get_int("Enter the value for j: ");

    int nextMultiple = i + j - i % j;

    printf("The next highest value after %d divisible by %d is %d.\n", i, j, nextMultiple);

    return 0;
}