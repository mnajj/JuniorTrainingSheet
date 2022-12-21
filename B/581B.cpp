#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  ll a[n], b[n];
  for (ll i = 0; i < n; ++i) {
    cin >> a[i];
  }
  b[n - 1] = a[n - 1];
  for (ll i = n - 2; i >= 0; --i) {
    if (a[i] > b[i + 1]) {
      b[i] = a[i];
    } else {
      b[i] = b[i + 1];
    }
  }
  for (int i = 0; i < n; ++i) {
    if (a[i] == b[i]) {
      if (i < n - 1 && b[i] == b[i + 1]) {
        cout << 1;
      } else {
        cout << 0;
      }
    } else {
      cout << (b[i] - a[i]) + 1;
    }
    cout << ' ';
  }
  return 0;
}
