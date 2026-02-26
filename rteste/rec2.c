#include <stdio.h>


int soma(int num);

int main(void)
{
    int numero = 5;
    printf("%d", soma(numero));
}

int soma(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    return num + soma(num - 1);
}