#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variables
    int value1, value2;

    // initialize variables
    value1 = get_int("Enter an integer: ");
    value2 = get_int("Enter another integer: ");

    // display results
    printf("The sum of %d and %d is %d.\n", value1, value2, value1 + value2);

    return 0;
}