#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vector_size = 3;
    int *vector = malloc(vector_size * sizeof(int));    

    for(int i = 0; i < vector_size; i++)
    {
        printf("%dst number: ", i + 1);
        scanf("%i", vector + i); // pointer arithmetic, since vector is already a pointer
    }

    int tmp;
    for (int i = 0; i < vector_size - 1; i++) // é n - 1 pois o laço interno já vai percorrer o vetor até o último elemento, que já estará organizado
    {
        for (int j = i + 1; j < vector_size; j++) // é n + 1 na inicialização pois assim evitamos de comparar o primeiro elemento com ele mesmo
        {
            if(vector[i] > vector[j])
            {
                tmp = vector[j];
                vector[j] = vector[i];
                vector[i] = tmp;
            }
        }
    }
   
    for (int i = 0; i < vector_size; i++)
    {
        printf("%i\n", vector[i]);
    }

    free(vector);
    return 0;
    
}