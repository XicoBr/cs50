#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];

    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello World!");
    }

    return 0;
}