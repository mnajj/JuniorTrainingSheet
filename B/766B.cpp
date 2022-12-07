#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);
cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
  fastio
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) cin >> a[i];
  sort(a, a + n);
  for (int i = 2; i < n; ++i) {
    if (
      a[i - 2] + a[i - 1] > a[i] &&
      a[i - 2] + a[i] > a[i - 1] &&
      a[i - 1] + a[i] > a[i - 2]
    ) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
