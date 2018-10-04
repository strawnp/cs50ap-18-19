#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare array to hold 5 integer values
    int examScores[5];

    // initialize values of each element in the array using its index
    examScores[0] = 90;
    examScores[1] = 88;
    examScores[2] = 99;
    examScores[3] = 73;
    examScores[4] = 94;

    // initialize sum of exam grades
    int sum = 0;

    // iterate over the array and add each exam score to the sum
    for (int i = 0; i < 5; i++)
    {
        sum += examScores[i];
    }

    // calculate the average grade
    float average = (float) sum / 5;    // case sum to a float to avoid integer division

    // display the results
    printf("You averaged %.1f%% on your exams.\n", average);
}