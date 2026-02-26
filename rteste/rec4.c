#include <stdio.h>


double potencia(double base, int exp);

int main(void)
{
    printf("%.3f", potencia(0, 0));
}

double potencia(double b, int e)
{
    
    if (b == 0 && e != 0){
        return 0;
    }
    if (e == 0)
    {
        return 1;
    }
    else if (e < 0)
    {
        return 1 / b * potencia(b, e + 1);
    }

    return b * potencia(b, e - 1);
}