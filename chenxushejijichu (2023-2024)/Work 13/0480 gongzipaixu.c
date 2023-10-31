#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char name[100][20];
    double score[100][3];
    double sum[100];
    int p = 0;

    while(n--)
    {
        scanf("%s %lf %lf %lf", name[p], &score[p][0], &score[p][1], &score[p][2]);
        sum[p] = score[p][0] + score[p][1] + score[p][2];
        p++;
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p - 1 - i; j++)
        {
            if (sum[j] < sum[j + 1])
            {
                double temp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = temp;

                char temp_name[20];
                strcpy(temp_name, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp_name);

                double temp_score[3];
                for (int k = 0; k < 3; k++)
                {
                    temp_score[k] = score[j][k];
                    score[j][k] = score[j + 1][k];
                    score[j + 1][k] = temp_score[k];
                }
            }   
        }
    }

    for (int i = 0; i < p; i++)
    {
        printf("%s %.2lf\n", name[i], sum[i]);
    }
}