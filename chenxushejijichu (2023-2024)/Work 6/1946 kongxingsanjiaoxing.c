#include <stdio.h>

int main()
 {
  char c;

  while (scanf("%c", &c) && c != '@')
    {
    if (c == '\n')
    {
      continue;
    }
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) 
    {
      for (int j = 0; j < n - i; ++j)
      {
        printf(" ");
      }
      printf("%c", c);
      for (int j = 0; j < 2 * i - 3; ++j)
      {
        printf(" ");
      }
      if (i != 1)
      {
        printf("%c", c);
      }
      printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; ++i)
    {
      printf("%c", c);
    }
    printf("\n\n");
  }

  return 0;
}