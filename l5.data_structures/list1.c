#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int number;
    struct node *next;
} node;


int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            
            return 1;
        }
        printf("Number: ");
        scanf("%i", &n->number);
        
        n->next = NULL;

        // se a lista estiver vazia
        if(list == NULL)
        {
            list = n;
        }
        // se o campo number de n for menor que o number de list, faz um preppend (adiciona no inicio)
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }
        else 
        {
            // percorre os nodes na lista
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // se ptr chegar no final da lista
                if (ptr->next == NULL)
                {
                    // ptr aponta para onde n está apontando == faz um append - adição no fim da lista
                    ptr->next = n;
                    break;
                }
                
                // se no meio da lista
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    } 

    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}