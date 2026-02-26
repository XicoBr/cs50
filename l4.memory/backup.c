#include <stdio.h>
#include <string.h>


int main(void)
{
    // int n = 50;
    // int *p = &n;    

    // printf("\nN's Address: %p\nValor de n: %i\n", &n, n);
    // printf("-=-=-=-=-=-=-==-=-\n");
    // printf("Endereco de p: %p\nValor de p: %p\nValor da variavel original(n): %i\n", &p, p, *p); 



    // typedef char *string;

    // string name;
    // char usr_name[50];

    // printf("\nName\n>> ");
    // strcpy(name, fgets(usr_name, sizeof(usr_name), stdin));

    // printf("%s\nlength: %i", name, strlen(name));




    // pointer arithmetic
    char *s = "HI!";
    // printf("%c\n", *s);
    // printf("%c\n", *(s + 1));
    // printf("%c\n", *(s + 2));
    
    printf("%s\n", s + 1);
    

    return 0;
}