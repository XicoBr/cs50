#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *list = malloc(3 * sizeof(int));
    
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;


    /* 
    - realloc - realoca um bloco de memória previamente alocado com malloc, calloc ou outra chamada de realloc;
    - permite aumentar ou diminuir o tamanho de memória dinâmica, MANTENDO os dados existentes até o tamanho menor entre o antigo e o novo;
    - LIBERA a memória previamente alocada
    */
    int *tmp = realloc(list, 4 * sizeof(int));
    
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp[3] = 4;    

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);    

    return 0;
}