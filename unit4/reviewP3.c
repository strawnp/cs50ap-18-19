#include <cs50.h>
#include <stdio.h>
#include <string.h>

int addTwo(int x);

int main(void)
{
    string s = get_string();
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }

    printf("%d\n", addTwo(4));
    printf("%d\n", addTwo(-1));

    // int nums[5];
    int nums[5] = {1, 2, 3, 4, 5};
    printf("%d\n", nums[2]);
    nums[4] = 17;
    printf("%d\n", nums[4]);
}

int addTwo(int x)
{
    return x + 2;
}