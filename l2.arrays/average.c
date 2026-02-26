#include <stdio.h>

const int SIZE = 3;

float average(int array[], int total);

int main(void)
{
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter score: ");
        scanf("%d", &scores[i]);
    }

    printf("The average is: %f", average(scores, SIZE));

    return 0;
}

float average(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++) 
    {
        sum += array[i];
    }
    return sum / (float) length;
}