#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str_s[50];
    char *str_t = malloc(strlen(str_s) + 1);
    
    if ( str_t == NULL)
    {
        return 1;
    }

    printf("S\n>> ");
    fgets(str_s, sizeof(str_s), stdin);

    str_t = strcpy(str_t, str_s);

    if (strlen(str_s) > 0)
    {
        str_t[0] = toupper(str_t[0]);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("S: %s\n", str_s);
    printf("T: %s\n", str_t);

    free(str_t);
    return 0;
}