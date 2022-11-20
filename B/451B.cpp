#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	int l(0), r(0), k(0);
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			r = i;
			++k;
			if (k == 1) l = i;
		}
	}
	reverse(a + l, a + r + 1);
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			cout << "no";
			return 0;
		}
	}
	cout << "yes" << endl << l + 1 << ' ' << r + 1;
	return 0;
}
