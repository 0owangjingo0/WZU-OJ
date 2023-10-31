#include <stdio.h>
#include <string.h>

void upper(char * word);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char word_count[100][100];
        int count[100] = {0};
        int p = 0;
        char word[100];
        scanf("%s", word);
        upper(word);
        while (word[0] != '#')
        {
            if (p == 0)
            {
                strcpy(word_count[p], word);
                count[p] = 1;
                p++;
            }
            else
            {
                for (int i = 0; i < p; i++)
                {
                    if (strcmp(word, word_count[i]) == 0)
                    {
                        count[i] += 1;
                        break;
                    }
                    else if (i == p - 1)
                    {
                        strcpy(word_count[p], word);
                        count[p] = 1;
                        p++;
                        break;
                    }
                    else if (strcmp(word, word_count[i]) < 0)
                    {
                        for (int j = p; j > i; j--)
                        {
                            strcpy(word_count[j], word_count[j - 1]);
                            count[j] = count[j - 1];
                        }
                        strcpy(word_count[i], word);
                        count[i] = 1;
                        p++;
                        break;
                    }
                    else if (
                        strcmp(word, word_count[i]) > 0
                        && strcmp(word, word_count[i + 1]) < 0
                    )
                    {
                        for (int j = p; j > i + 1; j--)
                        {
                            strcpy(word_count[j], word_count[j - 1]);
                            count[j] = count[j - 1];
                        }
                        strcpy(word_count[i + 1], word);
                        count[i + 1] = 1;
                        p++;
                        break;
                    }
                }
            }
            scanf("%s", word);
            upper(word);
        }

        printf("%d\n", p);
        for (int i = 0; i < p; i++)
        {
            printf("%s %d\n", word_count[i], count[i]);
        }
    }
}

void upper(char * word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32;
        }
    }
}