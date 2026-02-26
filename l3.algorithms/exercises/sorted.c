/* 
Exercício 3 – Verificar se está ordenado

Faça um programa que:

Leia 10 números

Verifique se o vetor já está em ordem crescente

Mostre:

"Vetor ordenado" ou

"Vetor não ordenado"

📌 Dica: compare vet[i] com vet[i+1].

*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vct_size = 5;
    int *vector = malloc(vct_size * sizeof(int));

    for(int i = 0; i < vct_size; i++)
    {
        printf("%ist number: ", i + 1);
        scanf("%i", &vector[i]);
    }

    for (int i = 0; i < vct_size - 1; i++)
    {
        if (vector[i] > vector[i + 1])
        {
            printf("Vector not sorted\n");
            return 1;
        }        
    }
    
    printf("Vetor sorted");
    free(vector);
    
    return 0;
}