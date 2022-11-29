#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	ll n, s, t;
	cin >> n >> s >> t;
	if (s == t) {
		cout << 0;
		return 0;
	}
	int a[n];
	bool b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = false;
	}
	if (s == a[s - 1]) {
		cout << -1;
		return 0;
	}
	int sum(0);
	while (true) {
		if (!b[s - 1]) {
			b[s - 1] = true;
			s = a[s - 1];
			sum++;
			if (s == t) {
				cout << sum;
				return 0;
			}
		} else {
			cout << -1;
			return 0;
		}
	}
}
