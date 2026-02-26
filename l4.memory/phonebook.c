#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    if (file == NULL)
    {
        return 1;
    }
    
    char *name = malloc(30 * sizeof(char));
    char *number = malloc(30 * sizeof(char));

    printf("Name: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Number: ");
    fgets(number, 30, stdin);
    number[strcspn(number, "\n")] = '\0';

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}