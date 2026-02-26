#include <stdio.h>


const int MAX_NUMBER = 50;

int string_length(char string[], int max_size);

int main(void)
{
    char name[MAX_NUMBER];    

    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    printf("The name is: %s\n", name);    

    printf("Length of name: %d\n", string_length(name, MAX_NUMBER));

    return 0;

}

int string_length(char string[], int max_size)
{
    int number = 0;
    int spaces = 0;

    for(int i = 0; i < max_size; i++)
    {
        if (string[i] == '\0')
        {
            break;
        } else if (string[i] == ' ')
        {
            spaces++;
        }
        number++;
            
    }
    return number - (spaces + 1);
}