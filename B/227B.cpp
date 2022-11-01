#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n, idx[100001];
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;
		idx[a] = i;
	}
	int m;
	cin >> m;
	long long one(0), two(0);
	while (m--) {
		int b;
		cin >> b;
		one += idx[b];
		two += (n + 1 - idx[b]);
	}
	cout << one << " " << two;
	return 0;
}
