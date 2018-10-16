#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// function prototypes/declarations
void printCapitalized(char c);
void printLowercase(char c);
void processString(string s);

int main(void)
{
    // value function --> returns a value to the calling function to be stored in a variable
    // from this line we know that there must exist a function declaration as follows:
    // `string get_string(void);`
    string message = get_string();

    // void function --> processes input only; typically used for printing values
    processString(message);
}

// function definitions
void printCapitalized(char c)
{
    if (islower(c))
        printf("%c", toupper(c));
    else
        printf("%c", c);
}

void printLowercase(char c)
{
    if (isupper(c))
        printf("%c", tolower(c));
    else
        printf("%c", c);
}

void processString(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            if (i % 2 == 0)
            {
                printCapitalized(s[i]);
            }
            else
            {
                printLowercase(s[i]);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}