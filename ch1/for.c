#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int j = get_int("Enter a number: ");

    for (int i = 0; i < 51 && i > 0; i += j)
    {
        printf("Current multiple of %d: %d\n", j, i);
    }

    return 0;
}