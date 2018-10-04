#include <cs50.h>
#include <stdio.h>
#include <string.h> // included to access strlen() function

int main(void)
{
    // initialize string variable
    string name = "Sherlock Holmes";

    // iterate over the letters in the string (character array)
    for (int i = 0; i < strlen(name); i++)
    {
        // print each individual letter using %c
        printf("%c\n", name[i]);
    }

    // print the string using %s
    printf("%s\n", name);
}