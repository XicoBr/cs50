#include <stdio.h>


int fatorial(int n);

int main(void)
{
    int numero = 4;
    printf("%d", fatorial(numero));
}

int fatorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * (fatorial(n - 1));
}