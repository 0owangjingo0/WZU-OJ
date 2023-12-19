#include <stdio.h>

int main(void)
{
    char name[100][50];
    int avr_score[100];
    int score[100];
    char gb[100][4];
    char xb[100][4];
    int lw[100];
    int money[100] = {0};
    int p = 0;

    int n;
    scanf("%d", &n);

    while (n--)
    {
        scanf(
            "%s %d %d %s %s %d",
            name[p],
            &avr_score[p],
            &score[p],
            gb[p],
            xb[p],
            &lw[p]
            );
        p++;
    }

    int index_max_money = 0;
    int max_money = 0;
    int sum_money = 0;

    for (int i = 0; i < p; i++)
    {
        if (avr_score[i] > 80 && lw[i] >= 1)
        {
            money[i] += 8000;
        }
        if (avr_score[i] > 85 && score[i] > 80)
        {
            money[i] += 4000;
        }
        if (avr_score[i] > 90)
        {
            money[i] += 2000;
        }
        if (avr_score[i] > 85 && xb[i][0] == 'Y')
        {
            money[i] += 1000;
        }
        if (score[i] > 80 && gb[i][0] == 'Y')
        {
            money[i] += 850;
        }

        sum_money += money[i];
        if (money[i] > max_money)
        {
            max_money = money[i];
            index_max_money = i;
        }
    }

    printf(
        "%s\n%d\n%d\n",
        name[index_max_money],
        money[index_max_money],
        sum_money
        );

    return 0;
}