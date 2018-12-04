# Mobile DB

## Prerequisites
None

## Problem
Suppose you are a regulator, managing a DB comprised of users from a number of cell carriers. They would like to structure the entry for each user in their DB as a <code>struct</code> called <code>user_info</code>, with the following fields: carrier name (string), name (string), number (a 10-digit long), incoming_mins (float), outgoing_mins (float).

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

// TODO: define the user_info struct below

int main (void)
{
    // example use of this struct
    user_info test;
    test.carrier = "AT&T";
    test.name = "David Malan";
    test.number = 6174852315;
    test.incoming_mins = 134.2;
    test.outgoing_mins = 256.1;
    
    // print info
    printf("User info is: \n");
    printf("carrier: %s\n", test.carrier);
    printf("name: %s\n", test.name);
    printf("number: %li\n", test.number);
    printf("incoming minutes: %.2f\n", test.incoming_mins);
    printf("outgoing minutes: %.2f\n", test.outgoing_mins);
}
```