#include <stdio.h>
#include <string.h>

int main(void)
{
    char op[20];

    while (scanf("%s", op), strcmp(op, "Quit") != 0)
    {
        if (strcmp(op, "Insert") == 0)
        {
            printf("Insert:\n");
        }
        else if (strcmp(op, "List") == 0)
        {
            printf("List:\n");
        }
        else if (strcmp(op, "Find") == 0)
        {
            printf("Find:\n");
        }
        else if (strcmp(op, "Change") == 0)
        {
            printf("Change:\n");
        }
        else if (strcmp(op, "Delete") == 0)
        {
            printf("Delete:\n");
        }
    }
    printf("Good bye!\n");
    
    return 0;
}