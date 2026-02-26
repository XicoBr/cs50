#include <stdio.h>

int main(void)
{
    char *s = malloc(sizeof(char));
    printf("S\n>> ");
    scanf("%s", s);
    printf("%s", s);
}