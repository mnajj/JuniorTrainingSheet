#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	ll n, k;
	cin >> n >> k;
	ll arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	ll m, i;
	for (i = 1;; ++i) {
		m = (i * (i + 1)) / 2;
		if (m >= k) break;
	}
	ll m2 = ((i * (i + 1)) / 2) - k;
	cout << arr[i - m2 - 1];
	return 0;
}
