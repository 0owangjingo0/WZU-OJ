#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char id[20];
    char cla[10];
    int num;
    struct Data *prev;
    struct Data *next;
};

struct Queue
{
    struct Data *head;
    struct Data *tail;
};

void In(struct Queue *queue, int count, int num);
void List(struct Queue *queue);
void Out(struct Queue *queue, int *count);

int main(void)
{
    //freopen("E:\\Document\\Github\\WZU-OJ-Private\\chengxushejikechengsheji\\All doc\\in1.txt", "r", stdin);
    //freopen("E:\\Document\\Github\\WZU-OJ-Private\\chengxushejikechengsheji\\All doc\\out1.txt", "w", stdout);
    struct Queue queue;
    queue.head = NULL;
    queue.tail = NULL;

    int count = 0;
    int num = 0;
    char op[20];
    while (scanf("%s", op), strcmp(op, "QUIT") != 0)
    {
        if (strcmp(op, "IN") == 0)
        {
            num++;
            In(&queue, count, num);
        }
        else if (strcmp(op, "LIST") == 0)
        {
            List(&queue);
        }
        else if (strcmp(op, "OUT") == 0)
        {
            count++;
            Out(&queue, &count);
        }
    }
    printf("GOOD BYE!\n");
    return 0;
}

void In(struct Queue *queue, int count, int num)
{
    struct Data *data = (struct Data *)malloc(sizeof(struct Data));
    scanf(
        "%s %s",
        data -> id,
        data -> cla
    );

    if (queue -> head == NULL)
    {
        queue -> head = data;
        queue -> tail = data;
        data -> prev = NULL;
        data -> next = NULL;
        data -> num = num;
    }
    else
    {
        data -> prev = queue -> tail;
        queue -> tail -> next = data;
        data -> num = queue -> tail -> num + 1;
        queue -> tail = data;
        data -> next = NULL;
    }

    printf(
        "IN:%d %s %s %d\n",
        queue -> tail -> num,
        queue -> tail -> id,
        queue -> tail -> cla,
        queue -> tail -> num - 1 - count
    );

}

void List(struct Queue *queue)
{
    printf("LIST:\n");
    struct Data *data = queue -> head;

    while (data != NULL)
    {
        printf(
            "%d %s %s\n",
            data -> num,
            data -> id,
            data -> cla
        );
        data = data -> next;
    }
}

void Out(struct Queue *queue, int *count)
{
    if (queue -> head == NULL)
    {
        printf("FAILED:\n");
        (*count)--;
        return;
    }
    printf(
        "OUT:%d %s %s\n",
        queue -> head -> num,
        queue -> head -> id,
        queue -> head -> cla
    );

    struct Data *data = queue -> head;
    queue -> head = queue -> head -> next;
    free(data);
}