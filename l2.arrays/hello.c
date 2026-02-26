#include <stdio.h>
#include <stdlib.h>

char get_string(char prompt[], char *usr_str)
{
    
    printf("%s", prompt);
    scanf("%s", usr_str);
    printf("Olá, %s!", usr_str);
}

int main() {
    char nome[50];
    get_string("Ola marilene \n>> ", nome);

    return 0;
}