#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	ll n, f;
	cin >> n >> f;
	ll a[n];
	ll sum(0);
	for (int i = 0; i < n; ++i) {
		ll k, l;
		cin >> k >> l;
		sum += min(k, l);
		if (k >= l) {
			a[i] = 0;
		} else {
			a[i] = min((k * 2), l) - min(k, l);
		}
	}
	sort(a, a + n, greater<ll>());
	for (int i = 0; i < n && f; ++i) {
		if (a[i]) {
			sum += a[i];
			f--;
		}
	}
	cout << sum;
	return 0;
}
