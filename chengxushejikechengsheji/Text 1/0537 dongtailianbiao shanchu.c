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
void List(struct LinkList *llst);
void Find(struct LinkList *llst);
void Change(struct LinkList *llst);
void Delete(struct LinkList *llst);

int main(void)
{
    //freopen("./in1.txt", "r", stdin);

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
            List(&llst);
        }
        else if (strcmp(op, "Find") == 0)
        {
            printf("Find:\n");
            Find(&llst);
        }
        else if (strcmp(op, "Change") == 0)
        {
            printf("Change:\n");
            Change(&llst);
        }
        else if (strcmp(op, "Delete") == 0)
        {
            printf("Delete:\n");
            Delete(&llst);
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

void List(struct LinkList *llst)
{
    struct Data * p = llst -> head;
    while (p != NULL)
    {
        printf(
            "%s %s %c %.1lf %.1lf %.1lf\n",
            p -> id,
            p -> name,
            p -> sex,
            p -> x,
            p -> y,
            p -> z
        );
        p = p -> next;
    }
}

void Find(struct LinkList *llst)
{
    char id[20];
    scanf("%s", id);

    struct Data * p = llst -> head;
    while (p != NULL && strcmp(p -> id, id) != 0)
    {
        p = p -> next;
    }

    if (p != NULL)
    {
        printf(
            "%s %s %c %.1lf %.1lf %.1lf\n",
            p -> id,
            p -> name,
            p -> sex,
            p -> x,
            p -> y,
            p -> z
        );
    }
    else
    {
        printf("Failed\n");
    }
}

void Change(struct LinkList *llst)
{
    char id[20];
    scanf("%s", id);

    struct Data * p = llst -> head;
    while (p != NULL && strcmp(p -> id, id) != 0)
    {
        p = p -> next;
    }

    if (p != NULL)
    {
        scanf(
            "%s %c %lf %lf %lf",
            p -> name,
            &(p -> sex),
            &(p -> x),
            &(p -> y),
            &(p -> z)
        );

        printf(
            "%s %s %c %.1lf %.1lf %.1lf\n",
            p -> id,
            p -> name,
            p -> sex,
            p -> x,
            p -> y,
            p -> z
        );
    }
    else
    {
        printf("Failed\n");
    }
}

void Delete(struct LinkList *llst)
{
    char id[20];
    scanf("%s", id);

    struct Data * p = llst -> head;
    struct Data * q = p;
    while (p != NULL && strcmp(p -> id, id) != 0)
    {
        q = p;
        p = p -> next;
    }

    if (p != NULL)
    {
        if (p == llst -> head)
        {
            llst -> head = p -> next;
        }
        else
        {
            q -> next = p -> next;
        }
        free(p);
        printf("Deleted\n");
    }
    else
    {
        printf("Failed\n");
    }
}