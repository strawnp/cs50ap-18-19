#include <cs50.h>
#include <stdio.h>
#include <string.h> // included to access strlen() function

int main(void)
{
    // get user input as a string
    string name = get_string("Enter your name: ");

    // iterate over the letters in the string (character array)
    for (int i = 0, j = strlen(name); i < j; i++)
    {
        // print each individual letter using %c
        printf("%c\n", name[i]);
    }

    // print the string using %s
    printf("%s\n", name);
}