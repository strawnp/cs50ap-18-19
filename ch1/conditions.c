#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input
    int num = get_int("Enter an integer: ");

    // use chained conditionals to print positive/negative/zero
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    // create a boolean flag for whether the number is even
    bool numIsEven = num % 2 == 0;

    // use flag to print even or odd
    if (numIsEven)
        printf("Even\n");
    else
        printf("Odd\n");

    // use ternary operator
    numIsEven ? printf("Even\n") : printf("Odd\n");
    num % 10 == 0 ? printf("Divisible by 10\n") : printf("Not divisible by 10\n");

    // use switch statement instead of a series of chained conditionals
    printf("The last digit of the number is ");
    switch (num % 10)
    {
        case 1:
        case -1:
            printf("1");
            break;
        case 2:
        case -2:
            printf("2");
            break;
        case 3:
        case -3:
            printf("3");
            break;
        case 4:
        case -4:
            printf("4");
            break;
        default:
            printf("something other than 1, 2, 3 or 4");
            break;
    }
    printf(".\n");

    return 0;
}