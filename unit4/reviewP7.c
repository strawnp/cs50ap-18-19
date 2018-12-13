#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO
    char c = 'Z';
    int shift = 13;

    printf("Starting ASCII: %d\nA Index: %d\n", c, c - 65);
    printf("A Index Shifted: %d\n", c - 65 + shift);
    printf("Wraparound Value: %d\n", (c - 65 + shift) % 26);
    printf("Shifted Character: %d (%c)\n", (c - 65 + shift) % 26 + 65, (c - 65 + shift) % 26 + 65);

    bool t = true;
    bool f = false;
    printf("%d\n", !t);
    printf("%d\n", !t && !f);
    printf("%d\n", t || f);
    printf("%d\n", f || f);
    printf("%d\n", !(f || f));
    printf("%d\n", !f && !f);

    if (0)
    {
        printf("1 is true\n");
    }
}