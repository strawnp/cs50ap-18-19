# Students Revisited

## Prerequisites
Loops

## Problem
Consider the struct <code>student</code>, that you saw in class as an example for a <code>struct</code>. One of the neat things about <code>struct</code>s is that they are malleable as data structures. For instance, after creating the struct, you might realize that in addition to <code>name</code>, <code>year</code> and <code>GPA</code>, you would also like to keep track of <code>house</code> (a string) and <code>HUID</code> (an 8-digit int). Add these two to the code below! Made sure to (1) modify the struct, (2) take in input from the user for the new fields, and then (3) print them correctly! (See <code>TODO</code>s below.)

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define STUDENTS 5

typedef struct
{
    string name;
    int year;
    float gpa;
    // TODO: add new student characteristics below

} student;

int main (void)
{
    // declare array of class structs
    student classroom[STUDENTS];
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("Please enter student name (e.g. \"Mark Anthony\"): ");
        classroom[i].name = get_string();
        printf("Please enter student's year (e.g. 2019): ");
        classroom[i].year = get_int();
        printf("Please enter student's GPA (e.g. 3.2): ");
        classroom[i].gpa = get_float();
        // TODO: take in user input for new characteristics below

    }
    
    // print student info
    printf("The students' info is:\n");
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("name: %s year: %i house: %s HUID: %i GPA: %.2f\n", classroom[i].name, classroom[i].year, TODO: fill in, \
             TODO: fill in, classroom[i].gpa);
    }
}
```