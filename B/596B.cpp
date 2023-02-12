#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

int main() {
	fastio
	ll n;
	cin >> n;
	ll a[2000000];
	for (ll i = 0; i < n; ++i) cin >> a[i];
	ll res(0);
	for (int i = 0; i < n; ++i) {
		if (i > 0) {
			res += abs(a[i] - a[i - 1]);
		} else {
			res += abs(a[i]);
		}
	}
	cout << res << endl;
	return 0;
}
