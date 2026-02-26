#include <stdio.h>
#include <string.h>

int main(void)
{
    

    char usr_s[50];
    char usr_t[50];
    
    printf("S1\n>> ");
    fgets(usr_s, sizeof(usr_s), stdin);
    
    printf("S2\n>> ");
    fgets(usr_t, sizeof(usr_t), stdin);

    printf("%s\n", usr_s);
    printf("%s\n", usr_t);

    return 0;
}