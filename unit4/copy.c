#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // validate arguments
    if (argc != 3)
    {
        printf("Usage: ./copy <src> <dest>\n");
        return 1;
    }

    // open file for reading
    FILE* inFile = fopen(argv[1], "r");
    if (inFile == NULL)
    {
        printf("Error opening file\n");
        return 2;
    }

    // open file for writing
    FILE* outFile = fopen(argv[2], "w");
    if (outFile == NULL)
    {
        printf("Error creating file\n");
        return 3;
    }

    // read from source and copy to destination
    int c;

    while ((c = fgetc(inFile)) != EOF)
    {
        fputc(c, outFile);
    }

    // close files
    fclose(inFile);
    fclose(outFile);
}