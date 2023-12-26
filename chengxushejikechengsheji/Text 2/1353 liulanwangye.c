#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char url[100];
    struct Data *prev;
    struct Data *next;
};

struct Stack
{
    struct Data *now;
};

void Visit(struct Stack *stack);
void Back(struct Stack *stack);
void Forward(struct Stack *stack);

int main(void)
{
    struct Stack stack;
    stack.now = NULL;

    char op[20];
    while (scanf("%s", op), strcmp(op, "QUIT") != 0)
    {
        if (strcmp(op, "BACK") == 0)
        {
            Back(&stack);
        }
        else if (strcmp(op, "FORWARD") == 0)
        {
            Forward(&stack);
        }
        else if (strcmp(op, "VISIT") == 0)
        {
            Visit(&stack);
        }
    }

    return 0;
}

void Visit(struct Stack *stack)
{
    struct Data *node = (struct Data *)malloc(sizeof(struct Data));
    scanf("%s", node -> url);
    node -> prev = NULL;
    node -> next = stack -> now;
    if (stack -> now != NULL)
    {
        stack -> now -> prev = node;
    }
    stack -> now = node;

    printf("%s\n", stack -> now -> url);
}

void Back(struct Stack *stack)
{
    if (stack -> now -> next != NULL)
    {
        stack -> now = stack -> now -> next;
        printf("%s\n", stack -> now -> url);
    }
    else
    {
        printf("Ignored\n");
    }
}

void Forward(struct Stack *stack)
{
    if (stack -> now -> prev != NULL)
    {
        stack -> now = stack -> now -> prev;
        printf("%s\n", stack -> now -> url);
    }
    else
    {
        printf("Ignored\n");
    }
}