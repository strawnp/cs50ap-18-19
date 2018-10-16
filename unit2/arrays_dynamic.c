#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get size of array
    int size = get_int("How many values would you like to enter? ");

    // dynamically allocate memory for array
    int* examScores = malloc(sizeof(int) * size);

    // initialize values of each element in the array using its index
    for (int i = 0; i < size; i++)
    {
        examScores[i] = get_int("Enter an exam score: ");
    }

    // initialize sum of exam grades
    int sum = 0;

    // iterate over the array and add each exam score to the sum
    for (int i = 0; i < size; i++)
    {
        sum += examScores[i];
    }

    // calculate the average grade
    float average = (float) sum / size;    // case sum to a float to avoid integer division

    // display the results
    printf("You averaged %.1f%% on your exams.\n", average);
}