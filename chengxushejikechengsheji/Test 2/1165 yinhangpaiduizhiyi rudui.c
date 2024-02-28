#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char id[20];
    char cla[10];
    int num;
    struct Data *prev;
};

struct Queue
{
    struct Data *head;
    struct Data *tail;
};

void In(struct Queue *queue);

int main(void)
{
    struct Queue queue;
    queue.head = NULL;
    queue.tail = NULL;

    char op[20];
    while (scanf("%s", op), strcmp(op, "QUIT") != 0)
    {
        if (strcmp(op, "IN") == 0)
        {
            In(&queue);
        }
    }
    printf("GOOD BYE!\n");
    return 0;
}

void In(struct Queue *queue)
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
        data -> num = 0;
    }
    else
    {
        data -> prev = queue -> tail;
        data -> num = queue -> tail -> num + 1;
        queue -> tail = data;
    }

    printf(
        "IN:%d %s %s %d\n",
        queue -> tail -> num + 1,
        queue -> tail -> id,
        queue -> tail -> cla,
        queue -> tail -> num
    );

}
