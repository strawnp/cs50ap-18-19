# Grades

## Prerequisites
None

## Problem
There’s a bug in this program such that if the user inputs the number 95, all four statements print out:

```c
jharvard@run.cs50.net (~): ./a.out
Enter a valid grade: 95
You got an A!
You got a B!
You got a C!
You got a D!
```

Modify the program such that if the user inputs the number 95, only the correct statement will print out:
```c
jharvard@run.cs50.net (~): ./a.out
Enter a valid grade: 95
You got an A!
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a valid grade (between 60 and 100): ");
    n = GetInt();
    
    // TODO: fix the bug!
    if (n >= 90)
        printf("You got an A!\n");
    if (n >= 80)
        printf("You got a B!\n");
    if (n >= 70)
        printf("You got a C!\n");
    if (n >= 60)
        printf("You got a D!\n");
}
```
