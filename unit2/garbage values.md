# Garbage Values

## Prerequisites
Loops

## Problem
In the below code, an array of 20 <code>int</code>s is declared, some values are set, and then the sum of the array is printed. However, the value printed seems to have little to do with the actual value of the sum. Why might this be? Fix the bug to print the actual sum!

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare the array, and store some values
    int values[20];
    values[0] = 1;
    values[1] = 10;
    values[2] = 5;
    values[3] = 12;
    values[4] = 3;

    // calculate the sum
    int sum = 0;
    for (int i = 0; i < 20; i++) // You are not allowed to change this line of the code!
    {
        sum += values[i];
    }

    printf("The sum of 1 + 10 + 5 + 12 + 3 is: %i\n", sum);
}
```