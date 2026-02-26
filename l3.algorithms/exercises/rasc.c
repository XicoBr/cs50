#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int  vector_size = 3;
    int *vector = malloc(vector_size * sizeof(int));
    int tmp;

    for(int i = 0; i < vector_size; i++)
    {
        printf("%ist number: ", i + 1);
        scanf("%i", &vector[i]);
    }

    for (int i = 0; i < vector_size - 1; i++)
    {
        for (int j = i + 1; j < vector_size; j++)
        {
            if (vector[j] < vector[i])
            {
                tmp = vector[j];
                vector[j] = vector[i];
                vector[i] = tmp;
            }
        }
    }

    for (int i = 0; i < vector_size; i++)
    {
        printf("%i\t", vector[i]);
    }

    free(vector);
    return 0;
}