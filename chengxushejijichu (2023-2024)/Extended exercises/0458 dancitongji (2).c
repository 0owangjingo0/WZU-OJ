#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upper(char * word);
int f_read(char word[][100], int p);

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        char word_count[100][100];
        int count[100] = {0};
        int p = 0;

        char word[100][100] = {0};
        int wp = 0;
        wp = f_read(word, p);

        for (int m = 0; m < wp; m++)
        {
            upper(word[m]);
            if (p == 0)
            {
                strcpy(word_count[p], word[m]);
                count[p] = 1;
                p++;
            }
            else
            {
                for (int i = 0; i < p; i++)
                {
                    if (strcmp(word[m], word_count[i]) == 0)
                    {
                        count[i] += 1;
                        break;
                    }
                    else if (i == p - 1)
                    {
                        strcpy(word_count[p], word[m]);
                        count[p] = 1;
                        p++;
                        break;
                    }
                    else if (strcmp(word[m], word_count[i]) < 0)
                    {
                        for (int j = p; j > i; j--)
                        {
                            strcpy(word_count[j], word_count[j - 1]);
                            count[j] = count[j - 1];
                        }
                        strcpy(word_count[i], word[m]);
                        count[i] = 1;
                        p++;
                        break;
                    }
                    else if (
                        strcmp(word[m], word_count[i]) > 0
                        && strcmp(word[m], word_count[i + 1]) < 0
                    )
                    {
                        for (int j = p; j > i + 1; j--)
                        {
                            strcpy(word_count[j], word_count[j - 1]);
                            count[j] = count[j - 1];
                        }
                        strcpy(word_count[i + 1], word[m]);
                        count[i + 1] = 1;
                        p++;
                        break;
                    }
                }
            }
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

int f_read(char word[][100], int p)
{
    char ch;
    int huanhang1 = 0;
    int dianhao = 0;
    int i = 0;
    while ((ch = getchar()) != EOF)
    {
        int flag = 0;
        if (ch == '\n' && huanhang1 && dianhao)
        {
            return p;
        }
        
        if (ch == '.' && huanhang1)
        {
            dianhao = 1;
            flag = 1;
        }
        else if (ch != '.')
        {
            huanhang1 = 0;
        }

        if (ch == '\n' && huanhang1 == 0)
        {
            huanhang1 = 1;
            flag = 1;
        }

        if (
            !(
                (ch >= 'a' && ch <= 'z')
                || (ch >= 'A' && ch <= 'Z')
            )
        )
        {
            flag = 1;
        }

        if (flag)
        {
            if (strcmp(word[p], "") == 0)
            {
                continue;
            }
            word[p][i] = '\0';
            p++;
            i = 0;
            continue;
        }

        if (
            (ch >= 'a' && ch <= 'z')
            || (ch >= 'A' && ch <= 'Z')
        )
        {
            word[p][i] = ch;
            i++;
        }
    }
}