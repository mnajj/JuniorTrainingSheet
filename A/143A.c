#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 9

int main()
{
  int r_1, r_2, c_1, c_2, d_1, d_2;
  int i, j, y, z;

  scanf("%d", &r_1); scanf("%d", &r_2);
  scanf("%d", &c_1); scanf("%d", &c_2);
  scanf("%d", &d_1); scanf("%d", &d_2);

  for(i = MIN; i <= MAX; ++i)
  {
    for(j = MIN; j <= MAX; ++j)
    {
      if(j == i) continue;

      for(y = MIN; y <= MAX; ++y)
      {
        if(y == i || y == j) continue;

        for(z = MIN; z <= MAX; ++z)
        {
          if(z == i || z == j || z == y) continue;
          if(i+j == r_1 && y+z == r_2 &&
             i+y == c_1 && j+z == c_2 &&
             i+z == d_1 && j+y == d_2)
          {
            printf("%d %d\n%d %d", i, j, y, z);
            return 0;
          }
        }
      }
    }
  }
  printf("%d", -1);
  return 0;
}
