#include <stdio.h>
#include <cs50.h>

int to_int(int c);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./sum summands.txt\n");
        return 1;
    }

    // TODO: open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int sum = 0;
    // TODO: read the contents of the source file one char (int!) at a time, and use the to_int() function to increment the overall sum by their value
    // remember to use int so that the c != EOF comparison is reliable
    int c;

    while ((c = fgetc(source)) != EOF)
    {
        sum += to_int(c);
    }

    // TODO: print the overall sum (and don't forget to close the input file!)
    printf("Sum: %d\n", sum);

    fclose(source);
}

int to_int(int c)
{
    if (c >= 48 && c <= 57)
    {
        return c - 48;
    }
    else
    {
        return 0;
    }
}