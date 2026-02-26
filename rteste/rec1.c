#include <stdio.h>


void contagem(int num);

int main(void)
{
    int numero = 5;
    contagem(numero);

    return 0;
}

void contagem(int num)
{
    if (num <= 0)
    {
        printf("FIM\n");
        return;
    }
    printf("%d", num);
    printf("\n");
    contagem(num - 1);    
}