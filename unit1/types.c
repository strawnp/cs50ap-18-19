#include <stdio.h>

int main(void)
{
    int a = 13;
    int b = 8;
    float c = 2.2;

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %.3f\n", a, b, (float) a / b);
    printf("%d / %f = %.100f\n", a, c, a / c);

    return 0;
}