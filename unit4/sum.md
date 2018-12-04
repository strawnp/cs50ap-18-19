# Sum

## Prerequisites
ASCII

## Problem
One of the useful features of file i/o is that it allows you to analyze large chunks of data at a time. Implement a program that takes in an input file called <code>summands.txt</code>, and prints out the sum of all the single-digit summands. The function <code>to_int()</code>, that takes a char digit and outputs its int value (and ignores new lines) has already been implemented for you.

```c
jharvard@run.cs50.net (~): ./a.out summands.txt

```

## Distribution Code
```c
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
    
    int sum = 0;
    // TODO: read the contents of the source file one char (int!) at a time, and use the to_int() function to increment the overall sum by their value
    // remember to use int so that the c != EOF comparison is reliable
    
    // TODO: print the overall sum (and don't forget to close the input file!)

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
```