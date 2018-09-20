# Ter(cente)nary Theater

## Prerequisites
None

## Problem
Rewrite the following program, which assigns you a with a theater ticket price based on your age group -- replacing the <strong>if</strong> statements with <strong>ternary</strong> operators. Age group 1 consists of children and seniors, and age group consists of all other demographics.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // query user for input
    int age_group;
    do
    {
        printf("Which age group are you a member of, 1 (children and seniors) or 2 (adults)? ");
        age_group = get_int();
    }
    while (age_group < 1 || age_group > 2);
    
    // TODO: rewrite the below condition, using a ternary operator
    int ticket_price;
    if (age_group == 1)
        ticket_price = 20;
    else
        ticket_price = 50;
    printf("The ticket cost is $%d\n", ticket_price);
}
```