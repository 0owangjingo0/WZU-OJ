#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data
{
    char id[20];
    char name[20];
    char sex;
    double x;
    double y;
    double z;
    struct Data *next;
};

struct LinkList
{
    struct Data *head;
};

void Insert(struct LinkList *llst);

int main(void)
{
    char op[20];
    struct LinkList llst;
    llst.head = NULL;

    while (scanf("%s", op), strcmp(op, "Quit") != 0)
    {
        if (strcmp(op, "Insert") == 0)
        {
            printf("Insert:\n");
            Insert(&llst);
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

void Insert(struct LinkList *llst)
{
    struct Data * node = (struct Data *)malloc(sizeof(struct Data));
    scanf(
        "%s %s %c %lf %lf %lf",
        node -> id,
        node->name,
        &(node -> sex),
        &(node -> x),
        &(node -> y),
        &(node -> z)
    );
    node -> next = NULL;

    struct Data * p = llst -> head;
    struct Data * q = p;
    if (p == NULL)
    {
        llst -> head = node;
    }
    else
    {
        while (p != NULL)
        {
            q = p;
            p = p -> next;
        }
        q -> next = node;
    }

    printf(
        "%s %s %c %.1lf %.1lf %.1lf\n",
        node -> id,
        node -> name,
        node -> sex,
        node -> x,
        node -> y,
        node -> z
    );
}