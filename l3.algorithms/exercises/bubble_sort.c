/* 
🟡 Nível 2 – Bubble Sort (ordenação clássica)
Exercício 4 – Bubble Sort básico

Implemente o Bubble Sort para:

Ler 10 números

Ordenar em ordem crescente

Mostrar o vetor antes e depois da ordenação

📌 Objetivo: entender trocas repetidas.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int vct_size = 5;
    int tmp;
    int *vector = malloc(vct_size * sizeof(int));
    

    for(int i = 0; i < vct_size; i++)
    {
        printf("%ist. number: ", i + 1);
        scanf("%i", &vector[i]);
    }

    printf("Unsorted list\n");
    for (int i = 0; i < vct_size; i++)
    {
        printf("%i\t", vector[i]);
    }
    printf("\n-=-=-=-=-=-=\n");


    
    for (int i = 0; i < vct_size - 1; i++)
    {        
        for (int j = 0; j < vct_size - i - 1; j++) // i = quantidade já ordenada no final; 1 pois comparamos [j] com [j + 1]
        {
            if (vector[j] > vector[j + 1])
            {
                for (int k = 0; k < vct_size; k++) // imprime o vetor a cada iteração
                {
                    printf("%d ", vector[k]);
                }

                tmp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = tmp;                
                printf("\n");
            }      
        }
        printf("\n-=-=-=-=-=-=-=\n");
    }

    printf("Sorted list\n");
    for (int i = 0; i < vct_size; i++)
    {
        printf("%i\t", vector[i]);
    }
    printf("\n");

    free(vector);
    return 0;
}