#include <bits/stdc++.h>
using namespace std;

struct Data
{
    char id[5];
    char name[20];
    char sex;
    int age;
    char edu[10];
    double wage;
    char add[20];
    char tel[20];
};

void Insert(struct Data data[], int * p);
void View(char id[], struct Data data[], int p);
bool compare(struct Data a, struct Data b);
void Find(char relation, double wage, struct Data data[], int p);
void Sort(struct Data data[], int p);
void Delete(char id[], struct Data data[], int * p);
void Change(char id[], struct Data data[], int p);

int main(void)
{
    //freopen("in1.txt", "r", stdin);
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
            char id[5];
            scanf("%s", id);
            View(id, data, p);
        }
        else if (strcmp(op, "FIND") == 0)
        {
            char relation;
            double wage;
            scanf(" %c %lf", &relation, &wage);
            Find(relation, wage, data, p);
        }
        else if (strcmp(op, "SORT") == 0)
        {
            Sort(data, p);
        }
        else if (strcmp(op, "DELETE") == 0)
        {
            char id[5];
            scanf("%s", id);
            Delete(id, data, &p);
        }
        else if (strcmp(op, "CHANGE") == 0)
        {
            char id[5];
            scanf(" %s", id);
            Change(id, data, p);
            sort(data, data + p, compare);
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
    if (a.wage != b.wage)
    {
        return a.wage < b.wage;
    }
    else
    {
        return strcmp(a.id, b.id) < 0;
    }
}

void Insert(struct Data data[], int * p)
{
    scanf(
        "%s %s %c %d %s %lf %s %s",
        data[*p].id,
        data[*p].name,
        &data[*p].sex,
        &data[*p].age,
        data[*p].edu,
        &data[*p].wage,
        data[*p].add,
        data[*p].tel
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
                "%s %s %c %d %s %.2lf %s %s\n",
                data[i].id,
                data[i].name,
                data[i].sex,
                data[i].age,
                data[i].edu,
                data[i].wage,
                data[i].add,
                data[i].tel
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

void Find(char relation, double wage, struct Data data[], int p)
{
    if (p == 0)
    {
        printf("NOT FIND\n");
        return;
    }
    
    int i;
    for (i = 0; i < p; i++)
    {
        if (data[i].wage > wage)
        {
            break;
        }
    }

    if (relation == '>')
    {
        if (i == p)
        {
            printf("NOT FIND\n");
        }
        else
        {
            for (int j = i; j < p; j++)
            {
                printf(
                    "%s %s %c %d %s %.2lf %s %s\n",
                    data[j].id,
                    data[j].name,
                    data[j].sex,
                    data[j].age,
                    data[j].edu,
                    data[j].wage,
                    data[j].add,
                    data[j].tel
                );
            }
        }
    }
    else if(relation == '<')
    {
        if (i == 0)
        {
            printf("NOT FIND\n");
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                printf(
                    "%s %s %c %d %s %.2lf %s %s\n",
                    data[j].id,
                    data[j].name,
                    data[j].sex,
                    data[j].age,
                    data[j].edu,
                    data[j].wage,
                    data[j].add,
                    data[j].tel
                );
            }
        }
    }
    else if (relation == '=')
    {
        if (i == 0 && data[i].wage == wage)
        {
            printf(
                "%s %s %c %d %s %.2lf %s %s\n",
                data[i].id,
                data[i].name,
                data[i].sex,
                data[i].age,
                data[i].edu,
                data[i].wage,
                data[i].add,
                data[i].tel
            );
        }
        else if (data[p - 1].wage == wage)
        {
            printf(
                "%s %s %c %d %s %.2lf %s %s\n",
                data[i].id,
                data[i].name,
                data[i].sex,
                data[i].age,
                data[i].edu,
                data[i].wage,
                data[i].add,
                data[i].tel
            );
        }
        else if (data[i - 1].wage == wage)
        {
            printf(
                "%s %s %c %d %s %.2lf %s %s\n",
                data[i-1].id,
                data[i-1].name,
                data[i-1].sex,
                data[i-1].age,
                data[i-1].edu,
                data[i-1].wage,
                data[i-1].add,
                data[i-1].tel
            );
        }
        else
        {
            printf("NOT FIND\n");
        }
    }
}

void Sort(struct Data data[], int p)
{
    for (int i = 0; i < p; i++)
    {
        printf(
            "%s %s %c %d %s %.2lf %s %s\n",
            data[i].id,
            data[i].name,
            data[i].sex,
            data[i].age,
            data[i].edu,
            data[i].wage,
            data[i].add,
            data[i].tel
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
            " %s %s %c %d %s %lf %s %s",
            data[i].id,
            data[i].name,
            &data[i].sex,
            &data[i].age,
            data[i].edu,
            &data[i].wage,
            data[i].add,
            data[i].tel
        );

        printf("Changed\n");
    }
    else
    {
        printf("Failed\n");
    }
}

