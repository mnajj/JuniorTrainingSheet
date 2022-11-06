#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int stps = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i - 1] + a[i] < k) {
			stps += abs(k - a[i - 1] - a[i]);
			a[i] = k - a[i - 1];
		}
	}
	cout << stps << endl;
	for (int i = 0; i < n; ++i) {
		cout << a[i] << ' ';
	}
	return 0;
}
