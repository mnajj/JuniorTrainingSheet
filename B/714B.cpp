#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	set<ll> s;
	vector<ll> v;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	if (s.size() == 1 || s.size() == 2) {
		cout << "YES" << endl;
		return 0;
	}
	if (s.size() > 3) {
		cout << "NO" << endl;
		return 0;
	}
  for (ll i: s) v.push_back(i);
  if (v[0] + v[2] == 2 * v[1]) cout << "YES" << endl;
  else cout << "NO" << endl;
	return 0;
}
