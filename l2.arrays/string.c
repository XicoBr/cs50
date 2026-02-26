#include <stdio.h>
#include <string.h>

const int MAX_NUMBER = 30;

int main(void)
{
    char string[MAX_NUMBER];
    
    printf("Input\n>> ");
    fgets(string, sizeof(string), stdin);

    for(int i = 0, j = strlen(string); i < j; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}