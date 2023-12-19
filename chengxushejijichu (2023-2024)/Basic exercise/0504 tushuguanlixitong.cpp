#include <bits/stdc++.h>
using namespace std;

struct Data
{
    char id[30];
    char name[30];
    char auth[30];
    char type[30];
    char pub[30];
    char date[30];
    double price;
};

bool compare(struct Data a, struct Data b);
void Insert(struct Data data[], int * p);
void View(char id[], struct Data data[], int p);
void Findname(char name[], struct Data data[], int p);
void Findauth(char auth[], struct Data data[], int p);
void Sort(struct Data data[], int p);
void Delete(char id[], struct Data data[], int * p);
void Change(char id[], struct Data data[], int p);

int main(void)
{
    freopen("in1.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    struct Data data[100];
    int p = 0;

    char op[20];
    char quit[] = "QUIT";
    char exit[] = "EXIT";
    scanf("%s", op);

    while (strcmp(op, quit) != 0 && strcmp(op, exit) != 0)
    {
        if (strcmp(op, "INSERT") == 0)
        {
            Insert(data, &p);
        }
        else if (strcmp(op, "VIEW") == 0)
        {
            char id[30];
            scanf("%s", id);
            View(id, data, p);
        }
        else if (strcmp(op, "FIND") == 0)
        {
            char op2[20];
            scanf("%s", op2);
            if (strcmp(op2, "NAME") == 0)
            {
                char name[30];
                scanf("%s", name);
                Findname(name, data, p);
            }
            else if (strcmp(op2, "AUTHOR") == 0)
            {
                char auth[30];
                scanf("%s", auth);
                Findauth(auth, data, p);
            }
            else
            {
                printf("Failed\n");
            }
        }
        else if (strcmp(op, "SORT") == 0)
        {
            Sort(data, p);
        }
        else if (strcmp(op, "DELETE") == 0)
        {
            char id[30];
            scanf("%s", id);
            Delete(id, data, &p);
        }
        else if (strcmp(op, "CHANGE") == 0)
        {
            char id[30];
            scanf("%s", id);
            Change(id, data, p);
        }
        else
        {
            printf("Failed\n");
        }

        scanf("%s", op);
    }
    
    printf("Good bye!\n");
    return 0;    
}


bool compare(struct Data a, struct Data b)
{
    if (a.price != b.price)
    {
        return a.price < b.price;
    }
    else
    {
        return strcmp(a.id, b.id) < 0;
    }
}

void Insert(struct Data data[], int * p)
{
    scanf(
        "%s %s %s %s %s %s %lf",
        data[*p].id,
        data[*p].name,
        data[*p].auth,
        data[*p].type,
        data[*p].pub,
        data[*p].date,
        &data[*p].price
    );

    for (int i = 0; i < *p; i++)
    {
        if (strcmp(data[*p].id, data[i].id) == 0)
        {
            printf("Failed\n");
            return;
        }
    }
    
    (*p)++;
    printf("Inserted\n");

    sort(data, data + *p, compare);
}

void View(char id[], struct Data data[], int p)
{
    int flag = 0;
    for (int i = 0; i < p; i++)
    {
        if (strcmp(id, data[i].id) == 0)
        {
            printf(
                "%s %s %s %s %s %s %.2lf\n",
                data[i].id,
                data[i].name,
                data[i].auth,
                data[i].type,
                data[i].pub,
                data[i].date,
                data[i].price
            );
            flag = 1;
            break;
        }
    }

    if (!flag)
    {
        printf("Failed\n");
    }
}

void Findname(char name[], struct Data data[], int p)
{
    int flag = 0;
    for (int i = 0; i < p; i++)
    {
        if (strcmp(name, data[i].name) == 0)
        {
            printf(
                "%s %s %s %s %s %s %.2lf\n",
                data[i].id,
                data[i].name,
                data[i].auth,
                data[i].type,
                data[i].pub,
                data[i].date,
                data[i].price
            );
            flag = 1;
        }
    }

    if (!flag)
    {
        printf("Failed\n");
    }
}

void Findauth(char auth[], struct Data data[], int p)
{
    int flag = 0;
    for (int i = 0; i < p; i++)
    {
        if (strcmp(auth, data[i].auth) == 0)
        {
            printf(
                "%s %s %s %s %s %s %.2lf\n",
                data[i].id,
                data[i].name,
                data[i].auth,
                data[i].type,
                data[i].pub,
                data[i].date,
                data[i].price
            );
            flag = 1;
        }
    }

    if (!flag)
    {
        printf("Failed\n");
    }
}

void Sort(struct Data data[], int p)
{
    for (int i = 0; i < p; i++)
    {
        printf(
            "%s %s %s %s %s %s %.2lf\n",
            data[i].id,
            data[i].name,
            data[i].auth,
            data[i].type,
            data[i].pub,
            data[i].date,
            data[i].price
        );
    }
}

void Delete(char id[], struct Data data[], int * p)
{
    int flag = 0;
    for (int i = 0; i < *p; i++)
    {
        if (strcmp(id, data[i].id) == 0)
        {
            flag = 1;
            for (int j = i; j < *p - 1; j++)
            {
                data[j] = data[j + 1];
            }
            (*p)--;
            printf("Deleted\n");
            break;
        }
    }

    if (!flag)
    {
        printf("Failed\n");
    }
}

void Change(char id[], struct Data data[], int p)
{
    int flag = 0;
    int i;
    for (i = 0; i < p; i++)
    {
        if (strcmp(data[i].id, id) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        scanf(
            " %s %s %s %s %s %s %lf",
            data[i].id,
            data[i].name,
            data[i].auth,
            data[i].type,
            data[i].pub,
            data[i].date,
            &data[i].price
        );
        sort(data, data + p, compare);
        printf("Changed\n");
    }
    else
    {
        printf("Failed\n");
    }
}

