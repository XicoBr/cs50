#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vec_size = 5;
    int *vector = malloc(vec_size * sizeof(int));
    int index_minor;

    for (int i = 0; i < vec_size; i++)
    {
        printf("%i.st number: ", i + 1);
        scanf("%i", vector + i);
    }

    int tmp;
    for (int i = 0; i < vec_size - 1; i++)
    {
        index_minor = i;
        for (int j = i + 1; j < vec_size; j++)
        {
            if (vector[index_minor] > vector[j])
            {
                index_minor = j;
            }
            tmp = vector[index_minor];
            vector[index_minor] = vector[i];
            vector[i] = tmp;
        }
    }

    for(int i = 0; i < vec_size; i++)
    {
        printf("%i\n", vector[i]);
    }

    free(vector);
    return 0;
}