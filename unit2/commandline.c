#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./commandline <arg1> <arg2>\n");
        return -1;
    }

    for (int i = 0; i < argc; i++)
    {
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            printf("%c\n", argv[i][j]);
        }
    }
}