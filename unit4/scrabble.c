#include <stdio.h>
#include <cs50.h>

#define ASCII_COUNT 128
#define ALPHABET 26

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./scrabble tom.txt\n");
        return 1;
    }

    // open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    // declare array to keep track of character count, and initialize to 0
    int char_count[ASCII_COUNT] = {0};

    // TODO: read the contents of the source file one char (int!) at a time, and increment the correct ASCII index in the
    // the array char_count. Remember to use int so that the c != EOF comparison is reliable
    int c;

    while ((c = fgetc(source)) != EOF)
    {
        char_count[c]++;
    }

    // declare final array for alphabet
    int alphabet[ALPHABET] = {0};
    // TODO: copy the counts from char_count -- only for capital and lowercase letters!
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = char_count[i + 65] + char_count[i + 97];
    }

    // print the final count
    printf("final count is:\n");
    for(int i = 0; i < ALPHABET; i++)
    {
        printf("%c: %i\n", i + 97, alphabet[i]);
    }

    printf("ASCII count is:\n");
    for(int i = 32; i < ASCII_COUNT; i++)
    {
        printf("ASCII value %d (%c): %i\n", i, i, char_count[i]);
    }

    fclose(source);
}