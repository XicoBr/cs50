#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct
{
    char name[20];
    char number[30];    
} person;


int main(void)
{
    person people[3];    
    char name[30];
    
    // lembrar que, para adicionar valores em um array de caractere (string) dentro de uma struct, devemos utilizar a função strcpy.
    // sua sintaxe é:
        // strcpy(struct_name[index].field, "value") 
    strcpy(people[0].name, "David");
    strcpy(people[0].number, "+1-617-495-1000");
 
    strcpy(people[1].name, "John");
    strcpy(people[1].number, "+1-949-468-2750");

    strcpy(people[2].name, "Yuliia");
    strcpy(people[2].number, "+1-617-495-1000");

    printf("Name: ");
    //scanf("%29s", name); // evita o estouro de buffer
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // calcula o tamanho do segmento inicial de uma string (str1) que NÃO contém nenhum caractere de um conjunto específico (str2)[2, 11], retornando o índice da primeira ocorrência de qualquer caractere de str2 encontrado em str1;
    // na função acima, estamos buscando a primeira ocorrencia do caractere de nova linha (\n) dentro da variável `name`, retornando o índice onde podemos encontrá-lo na variável externa `name`. Depois substituímos o caractere `\n` pelo caractere NUL `\0`, que sinaliza o fim de uma string.
    // Abaixo a sintaxe da função:
    // size_t len = strcspn(str1, str2); 


    int length = sizeof(people) / sizeof(people[0]);
    for (int i = 0; i < length; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Name found: %s\n", people[i].name);
            return 0;
        }
    }
    printf("Name not found\n");
    return 1;
}