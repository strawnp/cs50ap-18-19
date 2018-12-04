# Hide Anna K.

## Prerequisites
None

## Problem
You have a friend who would love to read Anna Karenina, but, alas -- he lives under a regime that has banned the book (the supreme commander has a distaste for Tolstoy). However, the regime is not very sophisticated, and even a simple encryption would likely be effective in hiding the text from them. Implement a program that takes in a text, and encrypts each character by shifting it, and then prints it to the destination. The program uses two command line arguments — a source file and a destination file. We have provided the first page of Anna Karenina for you to copy.

Hint: To make sure things worked as planned, you can also write a <code>decrypt</code> function, which your friend would be using after receiving the message!

```c
jharvard@run.cs50.net (~): ./a.out anna.txt copy.txt

```

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

int encrypt(int c);

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: cp source dest\n");
        return 1;
    }

    // open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    // now open up the destination file
    FILE* dest = fopen(argv[2], "w");
    if (dest == NULL)
    {
        // make sure to close the source file before exiting!
        fclose(source);
        printf("cp: %s: Cannot open file for writing\n", argv[2]);
        return 1;
    }

    // TODO: read the contents of the source file one char (int!) at a time, encrypt it, and write to output
    // remember to use int so that the c != EOF comparison is reliable


    // you leak memory if you forget to close!
    fclose(source);
    fclose(dest);
}

int encrypt(int c)
{
    // TODO: shift char by some value
}
```