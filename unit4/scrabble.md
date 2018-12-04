# Scrabble

## Prerequisites
Loops; ASCII; Arrays

## Problem
You would like to verify that the point system used in the board game scrabble is indeed accurate. To do so, you want to take in a large chunk of text, and count how many times each letter appears in it: the higher the count for a letter, the lower the number of points should be for using it in Scrabble. We have provided a txt file for you containing the full text of the novel Tom Sawyer, named <code>tom.txt</code>, as well as distribution code. Fill out the missing parts below!

```c
jharvard@run.cs50.net (~): ./scrabble tom.txt

```

## Distribution Code
```c
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
    
    
    // declare final array for alphabet
    int alphabet[ALPHABET] = {0};
    // TODO: copy the counts from char_count -- only for capital and lowercase letters!
    
    
    // print the final count
    printf("final count is:\n");
    for(int i = 0; i < ALPHABET; i++)
    {
        printf("%c: %i\n", i + 97, alphabet[i]);
    }
    
    fclose(source);
}
```