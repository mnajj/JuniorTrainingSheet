#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, k, i, u, v;
  scanf("%d%d%d", & n, & m, & k);
  bool holes[n + 1];
  fill(holes, holes + n + 1, false);
  int pos = 1;
  for (i = 0; i < m; ++i) {
    int tmp;
    scanf("%d", & tmp);
    holes[tmp] = true;
  }
  for (i = 0; i < k; ++i) {
    if (holes[pos]) {
      printf("%d\n", pos);
      return 0;
    }
    scanf("%d%d", & u, & v);
    if (pos == u) {
      pos = v;
    } else if (pos == v) {
      pos = u;
    }
  }
  printf("%d\n", pos);
  return 0;
}
