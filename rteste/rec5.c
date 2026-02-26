#include <stdio.h>

int contarDigitos(int n);

int main(void)
{
    printf("%d", contarDigitos(12345));
}

int contarDigitos(int n)
{
    if(n < 0)
    {
        n = n * (-1);
    }
    if (n < 10)
    {
        return 1;
    }

    return 1 + contarDigitos(n / 10);
}