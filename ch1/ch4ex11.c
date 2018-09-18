#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variables
    int num, numCopy, sum;

    // get user input
    num = numCopy = get_int("Enter an integer: ");
    sum = 0;

    // iterate through number from right to left using mod and int division
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    // display result
    printf("The sum of the digits of %d is %d.\n", numCopy, sum);

    return 0;
}