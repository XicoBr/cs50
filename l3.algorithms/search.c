#include <stdio.h>
#include <string.h>


int main(void)
{
    char *words[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char s[12];

    printf("Type the string\n>> ");
    scanf("%s", &s);
    

    for(int i = 0; i < 6; i++)
    {
        if (strcmp(words[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}