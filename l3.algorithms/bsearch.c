#include <stdio.h>
#include <math.h>

void binasrch(int list[], int length, int usr_choice);

int main(void)
{
    int list[] = {1, 7, 4, 50, 22, 200, 44};
    int usr_number = 0;
    int lst_length = sizeof(list) / sizeof(list[0]);
    // printf("Type the number\n>> ");
    // scanf("%d", &usr_number);

    binasrch(list, lst_length, usr_number);
    return 0;
}




void binasrch(int list[], int length, int usr_choice)
{
    for (int i = 0; i < length; i++)
    {   
        printf("%i\n", list[i]);
    }
}