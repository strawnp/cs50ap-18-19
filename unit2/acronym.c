#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// function prototypes/declarations
void printCapitalized(char c);
void processString(string s);

int main(void)
{
    // value function --> returns a value to the calling function to be stored in a variable
    // from this line we know that there must exist a function declaration as follows:
    // `string get_string(void);`
    string name = get_string();

    // void function --> processes input only; typically used for printing values
    printCapitalized(name[0]);
    printf(".");
    processString(name);
}

// function definitions
void printCapitalized(char c)
{
    if (islower(c))
        printf("%c", toupper(c));
    else
        printf("%c", c);
}

void processString(string s)
{
    for (int i = 1; i < strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            printCapitalized(s[i+1]);
            printf(".");
        }
    }
    printf("\n");
}