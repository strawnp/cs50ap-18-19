#include <math.h>
#include <stdio.h>

int main(void)
{
    float x = 2.55;

    float answer = 3 * x * x * x - 5 * x * x + 6;
    float answer2 = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
    double answer3 = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
    float answer4 = 3 * 16.581375 - 5 * 6.5025 + 6;
    float answer5 = 49.744125 - 32.5125 + 6;
    double answer6 = 23.231625;

    // actual answer: 23.231625
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer);
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer2);
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer3);
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer4);
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer5);
    printf("3x^2 - 5x^2 + 6 = %.20f\n", answer6);

    return 0;
}