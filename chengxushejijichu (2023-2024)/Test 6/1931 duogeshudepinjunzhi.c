#include <stdio.h>

int main() 
{
  int t, m;
  double sum = 0;
  double avg;

  scanf("%d", &t);

  for (int i = 0; i < t; i++) 
  {
    scanf("%d", &m);

    int nums[m];
    
    for (int j = 0; j < m; j++) 
    {
      scanf("%d", &nums[j]);
      sum += nums[j];
    }
    avg = sum / m;
    printf("%.2f\n", avg);
    sum = 0;
  }

  return 0;
}