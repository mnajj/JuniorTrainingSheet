#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

struct personData
{
  int l,r;
  char g;
};

int main() {
	fastio
  int n, f, m, max;
  cin >> n;
  personData a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i].g >> a[i].l >> a[i].r;
  }
  max = 0;
  for (int i = 1; i < 367; ++i) {
    f = 0; m = 0;
    for (int j = 0; j < n; ++j) {
      if(i >= a[j].l && i <= a[j].r) {
        if (a[j].g == 'M') ++m;
        else ++f;
      }
    }
    max = std::max(max, 2 * min(m, f));
  }
  cout << max << endl;
	return 0;
}
