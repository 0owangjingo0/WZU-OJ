#include <stdio.h>


struct Data
{
    int id;
    double score;
    int next_node;
};

int main(void)
{
    //freopen("in1.txt", "r", stdin);
    struct Data data[100];
    int head = 0;
    int p = 0;

    int id;
    double score;

    scanf("%d", &id);
    while (id != 0)
    {
        scanf("%lf", &score);
        data[p].id = id;
        data[p].score = score;
        p++;
        data[p - 1].next_node = p;
        scanf("%d", &id);
    }

    data[p - 1].next_node = -1;

    printf("The records are:\n");
    int a = head;
    while (a != -1)
    {
        printf("%d %.1lf\n", data[a].id, data[a].score);
        a = data[a].next_node;
    }

    int new_id;
    double new_score;
    scanf("%d", &new_id);
    while (new_id != 0)
    {
        scanf("%lf", &new_score);

        data[p].id = new_id;
        data[p].score = new_score;
        data[p].next_node = -1;
        p++;

        int a = head;
        int b = a;

        while (a != -1)
        {
            if (data[a].id > new_id)
            {
                break;
            }
            b = a;
            a = data[a].next_node;
        }

        if (a == head)
        {
            data[p - 1].next_node = head;
            head = p - 1;
        }
        else if (a == -1)
        {
            data[b].next_node = p - 1;
        }
        else
        {
            data[p - 1].next_node = data[b].next_node;
            data[b].next_node = p - 1;
        }
        scanf("%d", &new_id);
    }

    printf("The records are:\n");
    a = head;
    while (a != -1)
    {
        printf("%d %.1lf\n", data[a].id, data[a].score);
        a = data[a].next_node;
    }

    return 0;
}