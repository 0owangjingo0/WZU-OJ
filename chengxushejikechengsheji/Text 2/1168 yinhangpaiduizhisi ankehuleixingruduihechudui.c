#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data
{
    char id[20];
    char cla[20];
    int num;
    struct Data *next;
    struct Data *prev;
};

struct Queue
{
    struct Data *ohead;
    struct Data *otail;
    struct Data *vhead;
    struct Data *vtail;
    int ocount;
    int vcount;
    int onum;
};

void In(struct Queue *queue, int num);
void List(struct Queue *queue);
void Out(struct Queue *queue);

int main(void)
{
    struct Queue queue;
    queue.ohead = NULL;
    queue.otail = NULL;
    queue.vhead = NULL;
    queue.vtail = NULL;
    queue.ocount = 0;
    queue.vcount = 0;
    queue.onum = 0;
    
    int num = 0;
    char op[20];
    while (scanf("%s", op), strcmp(op, "QUIT") != 0)
    {
        if (strcmp(op, "IN") == 0)
        {
            num++;
            In(&queue, num);
        }
        else if (strcmp(op, "LIST") == 0)
        {
            List(&queue);
        }
        else if (strcmp(op, "OUT") == 0)
        {
            Out(&queue);
        }
    }
    printf("GOOD BYE!\n");
    return 0;
}

void In(struct Queue *queue, int num)
{
    struct Data *data = (struct Data *)malloc(sizeof(struct Data));
    scanf(
        "%s %s",
        data -> id,
        data -> cla
    );
    data -> num = num;

    if (strcmp(data -> cla, "VIP") == 0)
    {
        if (queue -> vhead == NULL)
        {
            queue -> vhead = data;
            queue -> vtail = data;
            data -> prev = NULL;
            data -> next = NULL;
        }
        else
        {
            data -> prev = queue -> vtail;
            queue -> vtail -> next = data;
            queue -> vtail = data;
            data -> next = NULL;
        }

        printf(
            "IN:%d %s %s %d\n",
            data -> num,
            data -> id,
            data -> cla,
            data -> num - 1 - (queue -> vcount) - (queue -> onum)
        );
    }
    else
    {
        (queue -> onum) += 1;
        if (queue -> ohead == NULL)
        {
            queue -> ohead = data;
            queue -> otail = data;
            data -> prev = NULL;
            data -> next = NULL;
        }
        else
        {
            data -> prev = queue -> otail;
            queue -> otail -> next = data;
            queue -> otail = data;
            data -> next = NULL;
        }

        printf(
            "IN:%d %s %s %d\n",
            data -> num,
            data -> id,
            data -> cla,
            data -> num - 1 - (queue -> vcount) - (queue -> ocount)
        );
    }
}

void Out(struct Queue *queue)
{
    if (queue -> vhead == NULL && queue -> ohead == NULL)
    {
        printf("FAILED:\n");
    }
    else
    {
        if (queue -> vhead != NULL)
        {
            printf(
                "OUT:%d %s %s\n",
                queue -> vhead -> num,
                queue -> vhead -> id,
                queue -> vhead -> cla
            );
            struct Data *data = queue -> vhead;
            queue -> vhead = queue -> vhead -> next;
            free(data);
            (queue -> vcount) += 1;
        }
        else
        {
            printf(
                "OUT:%d %s %s\n",
                queue -> ohead -> num,
                queue -> ohead -> id,
                queue -> ohead -> cla
            );
            struct Data *data = queue -> ohead;
            queue -> ohead = queue -> ohead -> next;
            free(data);
            (queue -> ocount) += 1;
        }
    }
}

void List(struct Queue *queue)
{
    printf("LIST:\n");
    struct Data *data = queue -> vhead;
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
    data = queue -> ohead;
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