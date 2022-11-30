#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	int n, q;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; ++i) cin >> a[i];
	cin >> q;
	sort(a, a + n);
	for (int i = 0; i < q; ++i) {
		int m;
		cin >> m;
		cout << upper_bound(a, a + n, m) - a << endl;
	}
}
