#include <iostream>

typedef long long int ll;

using namespace std;

int get(ll l, ll r, ll idx, int alphSize);

int main() {
  ll n, k;
  cin >> n >> k;
  ll sz = 1;
  for (int i = 1; i < n; ++i) sz = sz * 2LL + 1LL;
  cout << get(1, sz, k, n) << endl;
  return 0;
}

int get(ll l, ll r, ll idx, int alphSize) {
  ll m = (l + r) / 2LL;
  if (idx < m) {
    return get(l, m - 1, idx, alphSize - 1);
  } else if (idx > m) {
    return get(m + 1, r, idx, alphSize - 1);
  } else {
    return alphSize;
  }
}
