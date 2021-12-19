#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main()
{
  int n, k, i, kk, sum;
  int part[SIZE];

  n = k = sum = 0;
  scanf("%d", &n);
  scanf("%d", &k);
  for(i = 0; i < n; ++i)
  {
    scanf("%d", &part[i]);
  }
  kk = part[k-1];

  for(i = 0; i < n; ++i)
  {
    if(part[i] >= kk && part[i] > 0) sum++;
  }
  printf("%d", sum);
}
